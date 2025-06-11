document.addEventListener("DOMContentLoaded", function() {
    const searchBar = document.getElementById("search-bar");
    const eventCards = document.querySelectorAll(".event-card");
  
    searchBar.addEventListener("input", function() {
      const searchTerm = searchBar.value.toLowerCase();
  
      eventCards.forEach(card => {
        const title = card.querySelector("h3").textContent.toLowerCase();
        const description = card.querySelector(".description").textContent.toLowerCase();
  
        if (title.includes(searchTerm) || description.includes(searchTerm)) {
          card.style.display = "block";
        } else {
          card.style.display = "none";
        }
      });
    });
  });
  