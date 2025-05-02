// JavaScript arrays are heap-allocated and dynamic, simulating fixed size
const arr = [];  // Create an empty array
for (let i = 0; i < 5; i++) {
    arr[i] = i;  // Assign values to each index of the array
}
console.log(arr.join(" "));  // Print array values separated by space
