# Portfolio Tracker CLI

A modern C++ portfolio tracking project built incrementally to learn:

- Modern C++ (C++17/20)
- Systems programming concepts
- Financial systems architecture
- STL and data structures
- Modular software design
- Compilation model and build systems
- Performance-oriented thinking

This project is intentionally designed as an educational systems-oriented project rather than an enterprise application.

---

# Project Philosophy

The goal of this project is not only to build a portfolio tracker, but to deeply understand how modern C++ systems are architected and implemented.

The project focuses on:

- Incremental development
- Clean architecture
- Explicit ownership
- Separation of concerns
- Derived state computation
- Scalability-oriented design
- Modern C++ best practices

Complexity is introduced gradually and intentionally.

---

# Core Architectural Decisions

## Trade-Based Architecture

The portfolio is designed around individual trades as the source of truth.

Instead of storing aggregated positions permanently, the system stores only executed trades and derives positions dynamically.

This design provides:

- Better scalability
- Clear data flow
- Easier future extension
- More realistic financial system modeling

---

## Source of Truth

The core state of the system is:

```cpp
std::vector<Trade>
```

The portfolio stores individual trades as the single source of truth instead of permanently storing aggregated positions.

All higher-level portfolio information is derived dynamically from those trades, including:

- Positions
- Net quantities
- Average cost
- Total invested capital
- PnL
- Portfolio analytics

This architecture keeps the system flexible, scalable, and easier to evolve over time.

---

## Derived State Philosophy

Positions are intentionally treated as derived state rather than persisted state.

This avoids:

- Redundant information
- State inconsistencies
- Synchronization problems

The project follows the principle:

> Store minimal truth. Derive everything else.

---

## Scalability-Oriented Design

Even though the initial version is intentionally simple, the architecture is designed to scale naturally.

The system is prepared for future features such as:

- SELL operations
- Persistence
- Market data integration
- Analytics modules
- Risk calculations
- Performance optimizations
- Multithreading
- Benchmarking
- Low-latency experimentation

without requiring major architectural rewrites.

---

# Current Scope (Initial Version)

The first version intentionally includes only:

- BUY trades
- In-memory storage
- CLI interaction
- Position aggregation
- Average cost calculation
- Simple PnL logic

The project intentionally avoids premature complexity such as:

- Databases
- Networking
- External libraries
- Threading
- GUI
- Overengineering

---

# Technologies

- C++
- STL
- g++
- Git/GitHub

Future roadmap:

- CMake
- Unit testing
- Profiling
- Benchmarking
- Advanced STL usage

---

# Learning Goals

This project is used to deeply understand:

- Value semantics
- References and const correctness
- Object lifetime
- Stack vs heap
- Ownership models
- STL containers and algorithms
- Header/source separation
- Compilation and linking
- Memory management concepts
- Systems programming mindset

---

# Project Structure

```text
portfolio_tracker/
│
├── include/
│   ├── trade.hpp
│   ├── trade_side.hpp
│   ├── date.hpp
│   ├── position.hpp
│   └── portfolio.hpp
│
├── src/
│   ├── main.cpp
│   └── portfolio.cpp
│
├── build/
│
├── README.md
└── .gitignore
```

---

# Development Approach

The project is intentionally developed step-by-step.

The focus is:

1. Understand the architecture deeply
2. Build minimal working versions
3. Learn modern C++ idioms
4. Analyze compilation and errors
5. Refactor incrementally
6. Improve design gradually

The objective is long-term understanding, not rapid feature accumulation.

---

# Future Direction

This project is intended to evolve toward a more advanced financial systems playground, potentially integrating:

- Quantitative analytics
- Portfolio risk systems
- Performance analysis
- Persistence layers
- Real market data
- Systems-level optimization

It also complements a broader quant-oriented ecosystem developed in Python and C++.