// Adding dynamic scroll effect on service cards
const cards = document.querySelectorAll('.card');

cards.forEach(card => {
    card.addEventListener('mouseover', () => {
        card.style.transform = 'scale(1.05)';
        card.style.transition = 'all 0.3s ease';
    });

    card.addEventListener('mouseout', () => {
        card.style.transform = 'scale(1)';
    });
});
