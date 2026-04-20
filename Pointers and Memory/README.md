# C++ Pointers & References — Coding Challenges

A collection of coding challenges to sharpen your understanding of pointers and references in C++, organized by difficulty.

---

## 🟢 Beginner

### 1. Swap Without a Temp Variable
Write a function `swap(int* a, int* b)` using pointers to swap two integers in place. Then rewrite it using references.

### 2. Array Sum via Pointer Arithmetic
Given an array, iterate through it using *only pointer arithmetic* (no `[]` indexing) to compute the sum.

### 3. String Reversal in Place
Reverse a C-style string (`char*`) in place using two pointers walking toward each other.

### 4. Find Min and Max
Write `void minMax(int* arr, int size, int* min, int* max)` — the caller passes in pointers to receive both results simultaneously.

---

## 🟡 Intermediate

### 5. Implement a Linked List
Build a singly linked list with `Node* head`. Implement `insert`, `delete`, and `print` using raw pointers. Pay attention to pointer-to-pointer (`Node**`) when modifying the head.

### 6. Dynamic 2D Array
Allocate a 2D matrix using `int**`, populate it, transpose it in place, then free all memory correctly. No leaks allowed!

### 7. Reference-Based Binary Search
Write a recursive binary search that passes the array bounds by reference, tracking how many comparisons were made via a `int& count` parameter.

### 8. Pointer to Function
Create an `apply(int* arr, int size, int (*fn)(int))` function that transforms an array in place using a function pointer. Test it with squaring, negating, and doubling.

---

## 🔴 Advanced

### 9. Smart Pointer from Scratch
Implement a simplified `UniquePtr<T>` class that wraps a raw pointer, prevents copying, supports move semantics, and calls `delete` in its destructor.

### 10. Memory Pool Allocator
Pre-allocate a large `char` buffer and write `alloc(size_t n)` / `reset()` functions that hand out chunks of it via pointer arithmetic. Great for understanding alignment.

### 11. Doubly Linked List with Pointer-to-Pointer Deletion
Implement a doubly linked list where deletion uses a `Node**` cursor trick to eliminate the special "head node" edge case entirely.

### 12. Flatten a Multilevel Linked List
Given nodes that have both `next` and `child` pointers (like a tree stored as a list), flatten the structure into a single list in place.

---

## 💡 Tips While Practicing

- Always initialize pointers (`nullptr` if not yet assigned)
- Pair every `new` with a `delete` — use Valgrind or AddressSanitizer to check for leaks
- Prefer references over pointers when nullability isn't needed
- Understand the difference between:
  - `const T*` — pointer to constant data
  - `T* const` — constant pointer to data
  - `const T* const` — constant pointer to constant data