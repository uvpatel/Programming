// script.js
document.addEventListener('DOMContentLoaded', () => {
    const taskInput = document.getElementById('taskInput');
    const addTaskBtn = document.getElementById('addTaskBtn');
    const todoList = document.getElementById('todoList');
  
    // Function to add task
    function addTask(taskText) {
      if (taskText.trim() === "") return;
  
      const li = document.createElement('li');
      li.classList.add('task');
      
      const span = document.createElement('span');
      span.textContent = taskText;
      
      const deleteBtn = document.createElement('button');
      deleteBtn.textContent = 'Delete';
      deleteBtn.classList.add('delete');
      
      deleteBtn.addEventListener('click', () => {
        li.remove();
      });
  
      li.appendChild(span);
      li.appendChild(deleteBtn);
  
      // Toggle completed status
      li.addEventListener('click', () => {
        li.classList.toggle('completed');
      });
  
      todoList.appendChild(li);
    }
  
    // Event listener for adding task
    addTaskBtn.addEventListener('click', () => {
      addTask(taskInput.value);
      taskInput.value = ''; // Clear input field
    });
  
    // Event listener for "Enter" key to add task
    taskInput.addEventListener('keypress', (e) => {
      if (e.key === 'Enter') {
        addTask(taskInput.value);
        taskInput.value = ''; // Clear input field
      }
    });
  
    // Change the color theme based on the time of day
    function updateTheme() {
      const hour = new Date().getHours();
  
      if (hour >= 6 && hour < 12) {
        document.documentElement.style.setProperty('--primary-color', '#3498db'); // Morning: Blue
        document.documentElement.style.setProperty('--background-color', '#ecf0f1');
      } else if (hour >= 12 && hour < 18) {
        document.documentElement.style.setProperty('--primary-color', '#f39c12'); // Afternoon: Orange
        document.documentElement.style.setProperty('--background-color', '#f4f6f7');
      } else {
        document.documentElement.style.setProperty('--primary-color', '#9b59b6'); // Evening: Purple
        document.documentElement.style.setProperty('--background-color', '#2c3e50');
      }
    }
  
    updateTheme(); // Set the initial theme
    setInterval(updateTheme, 3600000); // Update every hour
  });
  