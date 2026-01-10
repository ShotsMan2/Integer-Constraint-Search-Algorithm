# Integer Constraint Search Algorithm

This project implements a brute-force search algorithm in C to solve a specific cryptarithmetic problem. It iterates through permutations of a 6-digit number ($ABCDEF$) to find values that satisfy a strict set of number theory constraints.

## 🎯 Problem Definition

The algorithm searches for a 6-digit integer $N$ represented as digits $A,B,C,D,E,F$ that satisfies **ALL** of the following logical conditions simultaneously:

1.  **Uniqueness:** All digits ($A, B, C, D, E, F$) must be distinct.
2.  **Perfect Square:** The number formed by the last two digits ($EF$) must be a perfect square ($x^2$).
3.  **Perfect Cube:** The number formed by the first three digits ($ABC$) must be a perfect cube ($y^3$).
4.  **Linear Relation:** Digit $A$ must be equal to $E + 1$.
5.  **Divisibility:** The number formed by the first two digits ($AB$) must be divisible by 3.
6.  **Primality:** The number formed by digits $D, E, F$ ($DEF$) must be a Prime Number.

## ⚙️ Technical Implementation

* **Language:** C (Standard Library only, no external dependencies).
* **Approach:** Nested Loops (Exhaustive Search / Brute Force).
* **Optimization:** The algorithm uses conditional `continue` statements to prune the search tree early. For instance, if the uniqueness constraint fails early, inner loops are skipped to save computational power.
* **Manual Math Logic:** Includes a custom implementation for primality testing (`is_prime` logic inside the loop) without using `<math.h>` functions, demonstrating low-level logic building.

## 🚀 How to Run

1.  Compile the code using GCC:
    ```bash
    gcc solver.c -o solver
    ```
2.  Run the executable:
    ```bash
    ./solver
    ```
3.  The program will output the 6-digit number(s) satisfying all criteria.

---
*This repository demonstrates algorithmic thinking and control flow management in C.*
