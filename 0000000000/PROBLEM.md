# A+B Problem (Big Numbers)

## Description

Given two non-negative integers A and B that may be very large (up to 100 digits each), compute A + B.

Because A and B can exceed the range of built-in 64-bit integer types, you cannot simply read them as `long long`. You must implement big-number addition yourself (e.g., by treating the numbers as strings or arrays of digits).

## Input

- The first line contains the integer A.
- The second line contains the integer B.
- Both A and B are non-negative integers with no leading zeros (except that the number 0 itself is written as `0`).
- The number of digits of A and B is at least 1 and at most 100.

## Output

- Print A + B on a single line. The output must not contain any leading zeros (except when the result itself is 0).

---

## Sample Input 1

```
12345678
87654321
```

## Sample Output 1

```
99999999
```

---

## Sample Input 2

```
99999999999999999999999999999999999999999999999999
1
```

## Sample Output 2

```
100000000000000000000000000000000000000000000000000
```

---

## Sample Input 3

```
0
0
```

## Sample Output 3

```
0
```
