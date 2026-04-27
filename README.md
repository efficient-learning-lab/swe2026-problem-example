# SWE2026 Assignment 3 - Create Your Own Problem!

1. Create your own problem in a private GitHub repository based on the following description.
2. In your GitHub repo, click the **Code** button and click the **Download ZIP** menu.
3. Submit the ZIP file through iCampus.

## Problem Directory Structure

```
root/
   [student_id]/              ← your student ID (10 digits)
      PROBLEM.md              ← problem description
      testcases/              ← testcases (10 ≤ # of testcases ≤ 100)
         00.in                ← 1st example (input)
         00.out               ← 1st example (output)
         01.in                ← 2nd example (input)
         01.out               ← 2nd example (output)
         ...
      images/                 ← additional images for better description (optional)
      SOLUTION.cpp            ← solution code
   0000000000/                ← an example
      PROBLEM.md
      SOLUTION.cpp
      testcases/
      images/
```

## Problem Design Rules

- `PROBLEM.md`, `SOLUTION.cpp`, and `testcases/` MUST be included in the submitted ZIP file. In `testcases/`, there must exist at least 10 test cases (and at most 100).
- For each input file `NN.in`, a matching expected output file `NN.out` must exist with the same prefix (e.g., `00.in` ↔ `00.out`). Use two-digit zero-padded names (`00`, `01`, ..., `99`).
- The solution program `SOLUTION.cpp` must read input from `stdin` and print output to `stdout`. You MUST use `scanf`/`printf` with `#include <cstdio>` or `cin`/`cout` with `#include <iostream>`. Do NOT read from or write to files directly.
- `SOLUTION.cpp` must compile with a standard C++ compiler (e.g., `g++ -std=c++17 SOLUTION.cpp -o SOLUTION`) without any external libraries beyond the C++ standard library.
- The output produced by `SOLUTION.cpp` on `NN.in` must exactly match the contents of `NN.out`.
- All filenames are case-sensitive. For example, `solution.cpp` or `problem.md` is NOT allowed. You MUST use `SOLUTION.cpp` and `PROBLEM.md`.
- You can write `PROBLEM.md` in English or Korean.
- Your problem will be released to other students. You should tune the difficulty so that approximately 50% of students can solve it. If the actual pass rate is close to 50%, you will earn bonus points.
- If any error is found by other students, TAs, or the professor, your score may be degraded. Make sure your problem statement, test cases, and solution are all consistent with each other.
