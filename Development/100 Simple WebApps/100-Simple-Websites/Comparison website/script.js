// Initialize an empty array to keep track of selected products
let selectedItems = [];

// Function to toggle the selection of a product
function toggleComparison(itemId) {
  const productElement = document.getElementById(itemId);
  const productTitle = productElement.querySelector('h2').innerText;

  if (selectedItems.includes(productTitle)) {
    // Remove the product from the selection list
    selectedItems = selectedItems.filter(item => item !== productTitle);
    productElement.classList.remove('selected');
  } else {
    // Add the product to the selection list
    selectedItems.push(productTitle);
    productElement.classList.add('selected');
  }

  // Update the selected products UI
  updateSelectedProducts();
}

// Function to update the UI of selected products
function updateSelectedProducts() {
  const selectedList = document.getElementById('selected-list');
  selectedList.innerHTML = ''; // Clear the existing list

  if (selectedItems.length > 0) {
    selectedItems.forEach(item => {
      const listItem = document.createElement('li');
      listItem.textContent = item;
      selectedList.appendChild(listItem);
    });
  } else {
    selectedList.innerHTML = '<li>No products selected</li>';
  }
}
