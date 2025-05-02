// JavaScript does not have stack-allocated arrays with fixed sizes.
// Simulating fixed-size array with fill and const
const arr = [];  // Create an empty array
for (let i = 0; i < 5; i++) {
    arr[i] = i + 1;  // Fill the array with values 1 to 5
}
console.log(arr.join(" "));  // Print array values separated by space
