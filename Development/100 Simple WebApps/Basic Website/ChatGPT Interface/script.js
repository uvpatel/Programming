// DOM Elements

const meesageForm = document.getElementById('message-form')
const messageInput = document.getElementById('message-input');
const messagesContainer = document.getElementById('chat-messages');
const welcomeScreen = document.getElementById('welcome-screen');
const newChatBtn = document.querySelector('.new-chat-btn');
const chatHistory = document.querySelector('.chat-history');
const exampleCards = document.querySelectorAll('.example-card');

// Chat History Data
let chats = []
let currentChatId = null

// initialize the app
function init() {
    // Load chats from localStorage if available
    const savedChats = localStorage.getItem('chats')
    if(savedChats){
        chats = JSON.parse(savedChats)
        renderChatHistory();
    }
}

// Adj