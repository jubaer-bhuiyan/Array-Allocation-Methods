# C++ vs JavaScript: Array Allocation Comparison

This repository demonstrates how **C++** and **JavaScript** handle array memory allocation. It covers four main types of array allocation:

## 1. **Fixed Stack Dynamic**
   - **C++**: Stack-allocated array with a fixed size at compile-time.
   - **JavaScript**: Simulated fixed-size array using dynamic heap allocation (no stack arrays in JavaScript).

## 2. **Stack Dynamic**
   - **C++**: Stack-allocated array where the size is determined at runtime using **Variable Length Arrays (VLAs)**.
   - **JavaScript**: Simulated stack array using the `Array` object (always heap-based in JavaScript).

## 3. **Fixed Heap Dynamic**
   - **C++**: Heap-allocated array with a fixed size.
   - **JavaScript**: Heap-based array created with a fixed length.

## 4. **Heap Dynamic**
   - **C++**: Heap-allocated array with a runtime size.
   - **JavaScript**: Array size is determined at runtime with dynamic growth.

### 🧠 Key Insights

- **C++** offers manual control over memory with stack and heap allocation, while JavaScript handles all arrays in the heap and uses **garbage collection**.
- **C++** requires explicit memory management with `new` and `delete` for heap memory.
- **JavaScript** does not have direct stack-allocated arrays, so all arrays are heap-based.

## Files

| File Name                | Language   | Description                     |
|-------------------------|------------|---------------------------------|
| `fixed_stack_dynamic.cpp` | C++        | Compile-time stack allocation   |
| `stack_dynamic.cpp`       | C++        | Runtime stack allocation        |
| `fixed_heap_dynamic.cpp`  | C++        | Fixed heap allocation           |
| `heap_dynamic.cpp`        | C++        | Runtime heap allocation         |
| `fixed_stack_dynamic.js`  | JavaScript | Simulated stack allocation      |
| `stack_dynamic.js`        | JavaScript | Runtime array creation          |
| `fixed_heap_dynamic.js`   | JavaScript | Simulated fixed heap allocation |
| `heap_dynamic.js`         | JavaScript | Runtime dynamic heap allocation |

### 💡 Conclusion

- **C++** provides more control over memory, allowing efficient low-level memory management.
- **JavaScript**, by design, abstracts memory management with garbage collection and heap-based arrays, offering a simpler, higher-level approach.

--- 

Feel free to explore the source code and examples to see how each language manages arrays and memory allocation!
