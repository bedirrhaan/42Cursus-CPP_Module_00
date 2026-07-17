# CPP Module 00

The first C++ module of the 42 Cursus — an introduction to **object-oriented programming** in C++.

## Topics

Namespaces, classes & member functions, `std::cin` / `std::cout` streams, initialization lists,
`static` and `const`, and basic encapsulation.

## Exercises

| Exercise | Description |
|---|---|
| **ex00 — Megaphone** | Convert program arguments to uppercase and print them |
| **ex01 — PhoneBook** | An interactive contact book (`ADD` / `SEARCH` / `EXIT`) using classes |
| **ex02 — Account** | Recreate a class from its `.hpp` and expected log output |

## Build

Each exercise has its own Makefile:

```bash
cd ex00 && make && ./megaphone "hello"
cd ex01 && make && ./phonebook
```

Written in C++98.
