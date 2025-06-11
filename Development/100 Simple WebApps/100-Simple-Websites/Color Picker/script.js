const colorPicker = document.getElementById('color-picker');
const colorValue = document.getElementById('color-value');

// Update the displayed color and hex value when the color is changed
colorPicker.addEventListener('input', function() {
    const selectedColor = colorPicker.value;
    colorValue.textContent = selectedColor;
    colorValue.style.color = selectedColor;
    document.body.style.backgroundColor = selectedColor;
});
