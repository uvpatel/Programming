// Example product data
const products = [
    {
      id: 1,
      name: "Wireless Earbuds",
      description: "High-quality sound and a comfortable fit.",
      price: "$39.99",
      image: "https://via.placeholder.com/300x200?text=Product+1"
    },
    {
      id: 2,
      name: "Smartwatch",
      description: "Track your fitness and stay connected.",
      price: "$99.99",
      image: "https://via.placeholder.com/300x200?text=Product+2"
    },
    {
      id: 3,
      name: "Portable Charger",
      description: "Stay charged on the go with this compact charger.",
      price: "$29.99",
      image: "https://via.placeholder.com/300x200?text=Product+3"
    }
  ];
  
  // Function to dynamically load products
  function loadProducts() {
    const productList = document.getElementById("product-list");
    
    products.forEach(product => {
      const productCard = document.createElement("div");
      productCard.classList.add("product-card");
      
      productCard.innerHTML = `
        <img src="${product.image}" alt="${product.name}">
        <div class="info">
          <h3>${product.name}</h3>
          <p>${product.description}</p>
          <div class="price">${product.price}</div>
        </div>
      `;
      
      productList.appendChild(productCard);
    });
  }
  
  // Load products on page load
  window.onload = loadProducts;
  