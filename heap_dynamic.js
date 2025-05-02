// Simulating user-defined size at runtime
const size = 10;  // This could be replaced by user input in a real application
const arr = [];  // Create an empty array
for (let i = 0; i < size; i++) {
    arr.push(i + 1);  // Push values to the array dynamically
}
console.log(arr.join(" "));  // Print array values separated by space
