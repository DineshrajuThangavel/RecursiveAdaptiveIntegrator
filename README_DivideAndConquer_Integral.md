# 📐 Divide and Conquer – Numerical Integration (C++)

This C++ project implements numerical integration using the trapezoidal rule with a divide-and-conquer approach. It allows for adaptive refinement of the integration interval based on a user-defined error tolerance.

## 📌 Features
- Trapezoidal integration of user-defined functions
- Divide-and-conquer strategy for adaptive accuracy
- Adjustable tolerance and lambda (interval division factor)
- Handles multiple cases: sin(x), cos(x), arctan(x), x·sin(x), and piecewise functions
- User input for integration limits, function selection, and accuracy settings
- Modular structure (separate files for integration logic, case functions, and main control)

## 📂 Files Included
- `main.cpp`: Entry point and user input handling
- `integral.cpp`: Core divide-and-conquer integration logic
- `cases.cpp`: Function definitions for integrands
- `T5-Divide-and-Conquer-Integral.pdf`: Project documentation/report

## 📚 Technologies
- C++
- Modular design using function pointers and condition-based recursion

## 🎓 Academic Context
Developed as part of a numerical methods course to explore adaptive integration and divide-and-conquer techniques.
