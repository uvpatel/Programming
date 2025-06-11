// Dynamic behavior for membership selection
document.getElementById('joinBasic').addEventListener('click', () => {
    alert('You have selected the Basic Plan!');
});

document.getElementById('joinPremium').addEventListener('click', () => {
    alert('You have selected the Premium Plan!');
});

// Dynamic background color change on hover
const membershipCards = document.querySelectorAll('.membership-card');

membershipCards.forEach(card => {
    card.addEventListener('mouseover', () => {
        card.style.backgroundColor = '#333333';
    });

    card.addEventListener('mouseout', () => {
        card.style.backgroundColor = '#1a1a1a';
    });
});
