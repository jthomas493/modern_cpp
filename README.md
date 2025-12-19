# 🚀 Modern C++ Mastery: Advanced Systems Programming

This repository serves as a comprehensive showcase of **Modern C++ (C++11/14/17/20)** development, containing implementations and projects completed during the "Complete Modern C++" masterclass by **Umar Lone**. The focus of this work is on writing high-performance, memory-safe, and idiomatic C++ code.

---

## 🛠 Core Technical Expertise

### 1. Advanced Memory Management & Resource Handling
* **RAII & Smart Pointers:** Deep implementation of `std::unique_ptr`, `std::shared_ptr`, and `std::weak_ptr` to eliminate memory leaks.
* **Move Semantics:** Mastering L-value/R-value references, `std::move`, and **Forwarding References** to optimize performance by reducing expensive deep copies.
* **Custom Memory Allocators:** Understanding stack vs. heap allocation and building custom memory management logic.

### 2. Standard Template Library (STL) & Generics
* **Template Programming:** Writing reusable code using Function and Class Templates, including **Variadic Templates** and **Template Specialization**.
* **STL Algorithms & Containers:** Advanced usage of the library to perform complex data manipulations efficiently.
* **Concepts (C++20):** Applying constraints to templates for clearer error messages and more robust generic code.

### 3. Functional Programming in C++
* **Lambdas & Closures:** Capturing scopes, generalized lambda captures, and using lambdas as first-class citizens.
* **Function Objects:** Working with `std::function`, `std::bind`, and custom functors.

### 4. Concurrency & Multithreading
* **Thread Management:** Implementation of `std::thread`, `std::mutex`, and `std::lock_guard` for thread-safe operations.
* **Asynchronous Programming:** Using `std::async`, `std::future`, and `std::promise` for non-blocking task execution.

---

## 🧩 Key Project Highlights

| Feature/Project | Focus Area | Key Modern Features Used |
| :--- | :--- | :--- |
| **Custom String Class** | Memory Management | Deep Copy vs. Move, Rule of 5, Operator Overloading. |
| **Concurrency Sandbox** | Multithreading | Mutexes, Condition Variables, Atomic operations. |
| **File I/O System** | Streams & Filesystem | C++17 `std::filesystem`, error handling. |
| **Generic Data Structures** | Metaprogramming | Templates, SFINAE (Substitution Failure Is Not An Error). |

---

## 💻 Tech Stack & Environment

* **Standards:** C++11, C++14, C++17, C++20
* **Compilers:** GCC / Clang / MSVC
* **Build Systems:** CMake
* **Debugger:** GDB / LLDB
* **Static Analysis:** Valgrind (for memory leak detection), Clang-Tidy

---

## 📚 Acknowledgments & References
* **Instructor:** Umar Lone (Complete Modern C++ Masterclass).
* **Documentation:** [cppreference.com](https://en.cppreference.com/) - The gold standard for C++ technical specs.

---
