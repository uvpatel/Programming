// DOM Elements
const messageForm = document.getElementById('message-form');
const messageInput = document.getElementById('message-input');
const messagesContainer = document.getElementById('chat-messages');
const welcomeScreen = document.getElementById('welcome-screen');
const newChatBtn = document.querySelector('.new-chat-btn');
const chatHistory = document.querySelector('.chat-history');
const exampleCards = document.querySelectorAll('.example-card');

// Chat history data
let chats = [];
let currentChatId = null;

// Initialize the app
function init() {
    // Load chats from localStorage if available
    const savedChats = localStorage.getItem('chats');
    if (savedChats) {
        chats = JSON.parse(savedChats);
        renderChatHistory();
    }
    
    // Adjust textarea height as user types
    messageInput.addEventListener('input', function() {
        this.style.height = 'auto';
        this.style.height = (this.scrollHeight) + 'px';
        if (this.scrollHeight > 200) {
            this.style.height = '200px';
        }
    });
    
    // Setup event listeners
    messageForm.addEventListener('submit', handleSubmit);
    newChatBtn.addEventListener('click', createNewChat);
    
    // Setup example card clicks
    exampleCards.forEach(card => {
        card.addEventListener('click', () => {
            messageInput.value = card.textContent;
            messageInput.focus();
        });
    });
}

// Create a new chat
function createNewChat() {
    // Hide current messages and show welcome screen
    messagesContainer.style.display = 'none';
    welcomeScreen.style.display = 'flex';
    
    // Reset form
    messageForm.reset();
    
    // Create new chat ID
    currentChatId = Date.now().toString();
    
    // Highlight current chat in sidebar if it exists
    const chatItems = document.querySelectorAll('.chat-item');
    chatItems.forEach(item => item.classList.remove('active'));
}

// Handle message submission
function handleSubmit(e) {
    e.preventDefault();
    
    const message = messageInput.value.trim();
    if (!message) return;
    
    // If no current chat, create one
    if (!currentChatId) {
        currentChatId = Date.now().toString();
    }
    
    // Add user message to UI
    addMessageToUI('user', message);
    
    // Clear input
    messageInput.value = '';
    messageInput.style.height = 'auto';
    
    // Hide welcome screen if visible
    welcomeScreen.style.display = 'none';
    messagesContainer.style.display = 'block';
    
    // Generate AI response
    setTimeout(() => {
        const aiResponse = generateResponse(message);
        addMessageToUI('ai', aiResponse);
        
        // Save chat to history
        saveChat(message, aiResponse);
    }, 500);
}

// Add message to the UI
function addMessageToUI(role, content) {
    const messageDiv = document.createElement('div');
    messageDiv.classList.add('message', role);
    
    const avatarDiv = document.createElement('div');
    avatarDiv.classList.add('message-avatar');
    avatarDiv.innerText = role === 'user' ? 'U' : 'AI';
    
    const contentDiv = document.createElement('div');
    contentDiv.classList.add('message-content');
    contentDiv.innerText = content;
    
    messageDiv.appendChild(avatarDiv);
    messageDiv.appendChild(contentDiv);
    
    messagesContainer.appendChild(messageDiv);
    
    // Scroll to bottom
    messagesContainer.scrollTop = messagesContainer.scrollHeight;
}

// Save chat to history
function saveChat(userMessage, aiResponse) {
    // Check if this chat already exists in history
    const existingChatIndex = chats.findIndex(chat => chat.id === currentChatId);
    
    if (existingChatIndex > -1) {
        // Add messages to existing chat
        chats[existingChatIndex].messages.push(
            { role: 'user', content: userMessage },
            { role: 'ai', content: aiResponse }
        );
    } else {
        // Create new chat
        const newChat = {
            id: currentChatId,
            title: userMessage.substring(0, 30) + (userMessage.length > 30 ? '...' : ''),
            messages: [
                { role: 'user', content: userMessage },
                { role: 'ai', content: aiResponse }
            ]
        };
        
        chats.unshift(newChat);
    }
    
    // Save to localStorage
    localStorage.setItem('chats', JSON.stringify(chats));
    
    // Render chat history
    renderChatHistory();
}

// Render chat history in sidebar
function renderChatHistory() {
    chatHistory.innerHTML = '';
    
    chats.forEach(chat => {
        const chatItem = document.createElement('div');
        chatItem.classList.add('chat-item');
        if (chat.id === currentChatId) {
            chatItem.classList.add('active');
        }
        chatItem.innerText = chat.title;
        chatItem.setAttribute('data-id', chat.id);
        
        chatItem.addEventListener('click', () => loadChat(chat.id));
        
        chatHistory.appendChild(chatItem);
    });
}

// Load a chat from history
function loadChat(chatId) {
    const selectedChat = chats.find(chat => chat.id === chatId);
    if (!selectedChat) return;
    
    // Update current chat ID
    currentChatId = chatId;
    
    // Clear messages
    messagesContainer.innerHTML = '';
    
    // Add messages from history
    selectedChat.messages.forEach(msg => {
        addMessageToUI(msg.role, msg.content);
    });
    
    // Show messages container, hide welcome screen
    welcomeScreen.style.display = 'none';
    messagesContainer.style.display = 'block';
    
    // Highlight current chat in sidebar
    const chatItems = document.querySelectorAll('.chat-item');
    chatItems.forEach(item => {
        if (item.getAttribute('data-id') === chatId) {
            item.classList.add('active');
        } else {
            item.classList.remove('active');
        }
    });
}

// Simple response generator function
function generateResponse(message) {
    const responses = [
        "I'm an AI assistant created to help answer your questions and provide information. How can I assist you further?",
        "That's an interesting question. Let me think about that for a moment...",
        "I understand what you're asking. Here's what I can tell you about that topic.",
        "Thanks for your question. Based on my knowledge, I can provide some insights on this.",
        "I appreciate your curiosity. Let me share what I know about this subject.",
        "That's a great question. I'll do my best to give you a helpful answer."
    ];
    
    // If message is about who made this, provide accurate info
    if (message.toLowerCase().includes("who made you") || 
        message.toLowerCase().includes("who created you")) {
        return "I'm a ChatGPT clone created as a demonstration. The real ChatGPT was created by OpenAI.";
    }
    
    // For other messages, return a random response
    return responses[Math.floor(Math.random() * responses.length)];
}

// Initialize the app when DOM is loaded
document.addEventListener('DOMContentLoaded', init); 