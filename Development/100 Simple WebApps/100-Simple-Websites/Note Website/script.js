// DOM Elements
const notesGrid = document.getElementById('notesGrid');
const noteDialog = document.getElementById('noteDialog');
const dialogTitle = document.getElementById('dialogTitle');
const addNoteBtn = document.getElementById('addNoteBtn');
const closeDialog = document.getElementById('closeDialog');
const cancelBtn = document.getElementById('cancelBtn');
const saveNoteBtn = document.getElementById('saveNoteBtn');
const noteTitleInput = document.getElementById('noteTitle');
const noteContentInput = document.getElementById('noteContent');
const themeToggleBtn = document.getElementById('themeToggleBtn');
const toast = document.getElementById('toast');

// State
let notes = [
  {
    id: 1,
    title: "Welcome to Notes",
    content: "Start writing your thoughts and ideas...",
    updatedAt: new Date(Date.now() - 1000 * 60 * 5) // 5 minutes ago
  },
  {
    id: 2,
    title: "Shopping List",
    content: "1. Groceries\n2. Household items\n3. Electronics",
    updatedAt: new Date(Date.now() - 1000 * 60 * 60) // 1 hour ago
  },
  {
    id: 3,
    title: "Project Ideas",
    content: "New features to implement in the notes app...",
    updatedAt: new Date(Date.now() - 1000 * 60 * 60 * 24) // 1 day ago
  }
];
let currentNoteId = null;
let isDarkMode = false;

// Initialize
function init() {
  loadNotesFromStorage();
  renderNotes();
  setupEventListeners();
  checkThemePreference();
}

// Load notes from local storage
function loadNotesFromStorage() {
  const savedNotes = localStorage.getItem('notes');
  if (savedNotes) {
    try {
      const parsedNotes = JSON.parse(savedNotes);
      // Convert string dates back to Date objects
      notes = parsedNotes.map(note => ({
        ...note,
        updatedAt: new Date(note.updatedAt)
      }));
    } catch (error) {
      console.error('Failed to parse notes from localStorage:', error);
    }
  }
}

// Save notes to local storage
function saveNotesToStorage() {
  localStorage.setItem('notes', JSON.stringify(notes));
}

// Check user's theme preference
function checkThemePreference() {
  // Check localStorage first
  const savedTheme = localStorage.getItem('theme');
  if (savedTheme === 'dark') {
    enableDarkMode();
  } else if (savedTheme === 'light') {
    disableDarkMode();
  } else {
    // If no saved preference, check system preference
    if (window.matchMedia && window.matchMedia('(prefers-color-scheme: dark)').matches) {
      enableDarkMode();
    }
  }
  
  // Listen for system theme changes
  if (window.matchMedia) {
    window.matchMedia('(prefers-color-scheme: dark)').addEventListener('change', e => {
      if (!localStorage.getItem('theme')) { // Only apply if user hasn't manually set a preference
        if (e.matches) {
          enableDarkMode();
        } else {
          disableDarkMode();
        }
      }
    });
  }
}

// Toggle dark mode with animation
function toggleDarkMode() {
  // Add animation class
  themeToggleBtn.classList.add('animating');
  
  if (isDarkMode) {
    disableDarkMode();
  } else {
    enableDarkMode();
  }
  
  // Remove animation class after animation completes
  setTimeout(() => {
    themeToggleBtn.classList.remove('animating');
  }, 500);
}

// Enable dark mode
function enableDarkMode() {
  document.body.classList.add('dark-mode');
  isDarkMode = true;
  localStorage.setItem('theme', 'dark');
}

// Disable dark mode
function disableDarkMode() {
  document.body.classList.remove('dark-mode');
  isDarkMode = false;
  localStorage.setItem('theme', 'light');
}

// Format date to relative time
function formatRelativeTime(date) {
  const now = new Date();
  const diffInSeconds = Math.floor((now - date) / 1000);
  
  if (diffInSeconds < 60) {
    return 'just now';
  }
  
  const diffInMinutes = Math.floor(diffInSeconds / 60);
  if (diffInMinutes < 60) {
    return `${diffInMinutes} minute${diffInMinutes > 1 ? 's' : ''} ago`;
  }
  
  const diffInHours = Math.floor(diffInMinutes / 60);
  if (diffInHours < 24) {
    return `${diffInHours} hour${diffInHours > 1 ? 's' : ''} ago`;
  }
  
  const diffInDays = Math.floor(diffInHours / 24);
  if (diffInDays < 30) {
    return `${diffInDays} day${diffInDays > 1 ? 's' : ''} ago`;
  }
  
  const diffInMonths = Math.floor(diffInDays / 30);
  return `${diffInMonths} month${diffInMonths > 1 ? 's' : ''} ago`;
}

// Render notes to the grid
function renderNotes() {
  notesGrid.innerHTML = '';
  
  notes.forEach(note => {
    const preview = note.content.split('\n')[0];
    
    const noteCard = document.createElement('div');
    noteCard.className = 'note-card';
    noteCard.onclick = () => openEditDialog(note.id);
    
    // Render for desktop
    const actions = document.createElement('div');
    actions.className = 'note-actions';
    
    const editBtn = document.createElement('button');
    editBtn.className = 'action-btn edit';
    editBtn.innerHTML = '<svg width="16" height="16" viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg"><path d="M15.2322 5.23223L18.7677 8.76777M16.7322 3.73223C17.7085 2.75592 19.2914 2.75592 20.2677 3.73223C21.244 4.70854 21.244 6.29146 20.2677 7.26777L6.5 21.0355H3V17.4644L16.7322 3.73223Z" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"/></svg>';
    editBtn.onclick = (e) => {
      e.stopPropagation();
      openEditDialog(note.id);
    };
    
    const deleteBtn = document.createElement('button');
    deleteBtn.className = 'action-btn delete';
    deleteBtn.innerHTML = '<svg width="16" height="16" viewBox="0 0 24 24" fill="none" xmlns="http://www.w3.org/2000/svg"><path d="M4 7H20M10 11V17M14 11V17M5 7L6 19C6 19.5304 6.21071 20.0391 6.58579 20.4142C6.96086 20.7893 7.46957 21 8 21H16C16.5304 21 17.0391 20.7893 17.4142 20.4142C17.7893 20.0391 18 19.5304 18 19L19 7M9 7V4C9 3.73478 9.10536 3.48043 9.29289 3.29289C9.48043 3.10536 9.73478 3 10 3H14C14.2652 3 14.5196 3.10536 14.7071 3.29289C14.8946 3.48043 15 3.73478 15 4V7" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"/></svg>';
    deleteBtn.onclick = (e) => {
      e.stopPropagation();
      deleteNote(note.id);
    };
    
    actions.appendChild(editBtn);
    actions.appendChild(deleteBtn);
    
    noteCard.innerHTML = `
      <h3>${note.title}</h3>
      <p class="preview">${preview}</p>
      <p class="time">${formatRelativeTime(note.updatedAt)}</p>
    `;
    
    noteCard.appendChild(actions);
    
    // Mobile actions
    const mobileActions = document.createElement('div');
    mobileActions.className = 'mobile-actions';
    
    const mobileEditBtn = document.createElement('button');
    mobileEditBtn.className = 'btn secondary';
    mobileEditBtn.textContent = 'Edit';
    mobileEditBtn.onclick = (e) => {
      e.stopPropagation();
      openEditDialog(note.id);
    };
    
    const mobileDeleteBtn = document.createElement('button');
    mobileDeleteBtn.className = 'btn secondary';
    mobileDeleteBtn.style.color = '#ef4444';
    mobileDeleteBtn.textContent = 'Delete';
    mobileDeleteBtn.onclick = (e) => {
      e.stopPropagation();
      deleteNote(note.id);
    };
    
    mobileActions.appendChild(mobileEditBtn);
    mobileActions.appendChild(mobileDeleteBtn);
    
    noteCard.appendChild(mobileActions);
    
    notesGrid.appendChild(noteCard);
  });
}

// Set up event listeners
function setupEventListeners() {
  addNoteBtn.addEventListener('click', openAddDialog);
  closeDialog.addEventListener('click', closeNoteDialog);
  cancelBtn.addEventListener('click', closeNoteDialog);
  saveNoteBtn.addEventListener('click', saveNote);
  themeToggleBtn.addEventListener('click', toggleDarkMode);
  
  // Close dialog when clicking outside
  noteDialog.addEventListener('click', (e) => {
    if (e.target === noteDialog) {
      closeNoteDialog();
    }
  });
}

// Open dialog to add a new note
function openAddDialog() {
  dialogTitle.textContent = 'Add Note';
  noteTitleInput.value = '';
  noteContentInput.value = '';
  currentNoteId = null;
  noteDialog.classList.add('active');
  noteTitleInput.focus();
}

// Open dialog to edit a note
function openEditDialog(id) {
  const note = notes.find(note => note.id === id);
  if (!note) return;
  
  dialogTitle.textContent = 'Edit Note';
  noteTitleInput.value = note.title;
  noteContentInput.value = note.content;
  currentNoteId = note.id;
  noteDialog.classList.add('active');
  noteTitleInput.focus();
}

// Close note dialog
function closeNoteDialog() {
  noteDialog.classList.remove('active');
}

// Save current note
function saveNote() {
  const title = noteTitleInput.value.trim();
  const content = noteContentInput.value.trim();
  
  if (!title) {
    alert('Please enter a title');
    return;
  }
  
  if (currentNoteId === null) {
    // Add new note
    const newNote = {
      id: Date.now(),
      title,
      content,
      updatedAt: new Date()
    };
    notes.unshift(newNote);
    showToast('Note added successfully');
  } else {
    // Update existing note
    notes = notes.map(note => 
      note.id === currentNoteId 
        ? { ...note, title, content, updatedAt: new Date() } 
        : note
    );
    showToast('Note updated successfully');
  }
  
  saveNotesToStorage();
  renderNotes();
  closeNoteDialog();
}

// Delete a note
function deleteNote(id) {
  if (confirm('Are you sure you want to delete this note?')) {
    notes = notes.filter(note => note.id !== id);
    saveNotesToStorage();
    renderNotes();
    showToast('Note deleted successfully');
  }
}

// Show a toast notification
function showToast(message) {
  toast.textContent = message;
  toast.classList.add('show');
  
  // Hide toast after 3 seconds
  setTimeout(() => {
    toast.classList.remove('show');
  }, 3000);
}

// Initialize app
document.addEventListener('DOMContentLoaded', init);