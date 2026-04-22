# C++ Study Plan (10 Weeks)
> For developers coming from Python, C#, or JavaScript

---

## Overview

| Phase | Topic | Weeks |
|-------|-------|-------|
| 1 | Pointers & Memory | 1–2 |
| 2 | Classes & RAII | 3–4 |
| 3 | Move Semantics & Templates | 5–6 |
| 4 | STL & Algorithms | 7–8 |
| 5 | Real Projects | 9–10 |

---

## Phase 1 — Pointers & Memory (Weeks 1–2)

### Topics

#### 1. Pointers & References
Understand `*`, `&`, dereferencing, pointer arithmetic, and null pointers.

**Exercise:** Write a `swap(int* a, int* b)` function. Then rewrite it using references. Compare how they are called at the call site.

---

#### 2. Stack vs Heap
Know when variables live on the stack and when you allocate on the heap with `new`/`delete`.

**Exercise:** Create a program that builds an `int` array of user-specified size on the heap, fills it with squares, prints it, then deletes it. Use Valgrind to verify no leaks.

---

#### 3. Smart Pointers
`unique_ptr`, `shared_ptr`, `weak_ptr` — prefer these over raw `new`/`delete`.

**Exercise:** Rewrite your heap array program using `unique_ptr<int[]>`. Notice you never call `delete`.

---

#### 4. const Correctness
`const` pointers, pointer to `const`, `const` references — a core C++ discipline.

**Exercise:** Write a `printArray(const int* arr, int size)` function. Try to accidentally modify `arr` inside it and observe the compiler error.

---

## Phase 2 — Classes & RAII (Weeks 3–4)

### Topics

#### 1. Classes: Constructors & Destructors
Build classes with proper constructors, copy constructors, and destructors.

**Exercise:** Build a `DynamicArray` class that wraps a heap-allocated array. Give it a constructor, destructor, and `operator[]` overload.

---

#### 2. RAII Pattern
Resource Acquisition Is Initialization — tie resource lifetime to object lifetime.

**Exercise:** Build a `FileGuard` class whose constructor opens a file and destructor closes it. Verify the file closes even when an exception is thrown.

---

#### 3. Operator Overloading
Overload `+`, `==`, `<<`, `[]` etc. to make custom types feel native.

**Exercise:** Build a `Vec2` struct and overload `+`, `-`, `*`, `==`, and `ostream <<` so you can print it naturally.

---

#### 4. Inheritance & Virtual
Base/derived classes, virtual functions, pure virtual, vtable concept.

**Exercise:** Create a `Shape` base class with a virtual `area()` method. Derive `Circle` and `Rectangle` from it. Store them in a `vector<Shape*>` and print each area polymorphically.

---

## Phase 3 — Move Semantics & Templates (Weeks 5–6)

### Topics

#### 1. Copy vs Move Semantics
Understand lvalues/rvalues, the copy constructor vs move constructor, `std::move`.

**Exercise:** Add a move constructor and move assignment operator to your `DynamicArray` class. Use `std::move` to transfer ownership between two instances and verify no double-free.

---

#### 2. Rule of 5
If you define any of: destructor / copy ctor / copy assign / move ctor / move assign — define all 5.

**Exercise:** Audit your `DynamicArray` class to ensure it follows the Rule of 5. Add print statements inside each special member to trace which gets called.

---

#### 3. Function Templates
Write generic functions with `template<typename T>`.

**Exercise:** Write a generic `clamp(T value, T lo, T hi)` template. Test with `int`, `double`, and `char`.

---

#### 4. Class Templates
Parameterize entire classes — like building your own `vector<T>`.

**Exercise:** Turn your `DynamicArray` into a template class `DynamicArray<T>` and test it with `int`, `std::string`, and `double`.

---

## Phase 4 — STL & Algorithms (Weeks 7–8)

### Topics

#### 1. Sequence Containers
`vector`, `array`, `deque`, `list` — know when to use each and their complexities.

**Exercise:** Implement a to-do list using `std::vector<std::string>`. Support add, remove by index, and print all. Then switch the backing container to `std::list` and observe what changes.

---

#### 2. Associative Containers
`map`, `unordered_map`, `set`, `unordered_set` — keyed lookups.

**Exercise:** Write a word frequency counter: read words from a string, store counts in `unordered_map<string, int>`, then print the top 5 most common words.

---

#### 3. Iterators
Understand `begin`/`end`, range-based for loops, iterator categories.

**Exercise:** Use `std::find_if` with a lambda to locate the first even number in a vector. Then use `std::partition` to split evens and odds in place.

---

#### 4. STL Algorithms
`sort`, `transform`, `accumulate`, `copy_if`, `for_each` — prefer over raw loops.

**Exercise:** Given a vector of ints: sort it, compute the sum with `accumulate`, filter to keep only values above the mean, and transform the remainder by squaring each — all using STL algorithms and lambdas.

---

## Phase 5 — Real Projects (Weeks 9–10)

### Topics

#### 1. Project: Text Adventure Engine
Build a small room-based adventure using polymorphism, smart pointers, and maps.

**Exercise:** Rooms stored in `unordered_map<string, unique_ptr<Room>>`. Each room has `virtual void onEnter()`. Player holds a `shared_ptr` to the current room.

---

#### 2. Project: Mini JSON Parser
Parse a subset of JSON (numbers, strings, arrays) using recursive descent.

**Exercise:** Write a `parseValue()` that returns a `std::variant<int, std::string, std::vector<...>>`. Great practice for recursion and the type system.

---

#### 3. Build System Basics
Understand how to use CMake to compile multi-file projects.

**Exercise:** Take any previous multi-file project and write a `CMakeLists.txt` for it. Build it in a `build/` directory with `cmake .. && make`.

---

#### 4. Undefined Behavior Hunting
Learn to use AddressSanitizer (`-fsanitize=address`) and UBSan to catch bugs.

**Exercise:** Intentionally introduce an out-of-bounds access and a use-after-free in a test program. Compile with `-fsanitize=address,undefined` and read the output.

---

## Tools to Install

| Tool | Purpose |
|------|---------|
| GCC or Clang | Compiler |
| CMake | Build system |
| Valgrind | Memory leak detection (Linux/Mac) |
| VS Code + C/C++ extension | Editor |
| AddressSanitizer (built into GCC/Clang) | Undefined behaviour detection |

---

## Recommended Resources

- **cppreference.com** — your primary reference, authoritative and complete
- **A Tour of C++** by Bjarne Stroustrup — best short intro book
- **Effective Modern C++** by Scott Meyers — essential once you finish Phase 3

---

## Tips

- Don't just make exercises compile — **break them on purpose**. Cause a memory leak, then fix it. Trigger undefined behaviour, then sanitize it.
- Phases build on each other. Resist jumping ahead — move semantics only clicks once you've felt the pain of manual memory management.
- When in doubt, check cppreference before Stack Overflow.