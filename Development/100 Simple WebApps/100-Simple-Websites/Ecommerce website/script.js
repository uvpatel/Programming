// Add Event Listeners to "Add to Cart" buttons
const addToCartButtons = document.querySelectorAll('.add-to-cart');

addToCartButtons.forEach(button => {
    button.addEventListener('click', (e) => {
        const productName = e.target.parentElement.querySelector('h3').textContent;
        alert(`${productName} has been added to your cart!`);
    });
});
