document.querySelector('.hero button').addEventListener('click', function() {
    alert('Let’s start learning!');
    // Example of adding some dynamic animation (optional)
    this.style.transform = 'scale(1.1)';
    setTimeout(() => {
        this.style.transform = 'scale(1)';
    }, 200);
});
