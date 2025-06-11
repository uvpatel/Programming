document.querySelectorAll('a').forEach(anchor => {
    anchor.addEventListener('click',function(e){
        e.preventDefault();
        document.querySelector(this.getAttribute('href')).scrollIntoView({
            behavior: 'smooth'
        })
    })
})


// Optional: You can add interactive elements with JavaScript
// For example, a simple scroll-to-top button or smooth scrolling behavior

// Smooth scrolling behavior for navigation links


function toggleMenu() {
    const menu = document.querySelector('.nav-menu');
    menu.classList.toggle('active');}


const toggleBtn = document.getElementById("theme-toggle");
  toggleBtn.addEventListener("click", () => {
    document.body.classList.toggle("dark-mode");
  });