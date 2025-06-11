// Simulated search data (you can replace this with an API request)
const fakeSearchResults = [
    'Niche topic 1',
    'Niche topic 2',
    'Niche topic 3',
    'Niche topic 4',
    'Niche topic 5',
    'Niche topic 6',
];

function searchAction() {
    const searchQuery = document.getElementById('searchBar').value.toLowerCase().trim();
    const resultsContainer = document.getElementById('results');
    
    if (searchQuery === '') {
        resultsContainer.innerHTML = '';
        return;
    }

    // Simulate dynamic search results based on query
    const filteredResults = fakeSearchResults.filter(item => item.toLowerCase().includes(searchQuery));
    
    resultsContainer.innerHTML = '';
    
    if (filteredResults.length > 0) {
        filteredResults.forEach(item => {
            const resultDiv = document.createElement('div');
            resultDiv.classList.add('result-item');
            resultDiv.textContent = item;
            resultsContainer.appendChild(resultDiv);
        });
    } else {
        resultsContainer.innerHTML = '<p>No results found.</p>';
    }
}
