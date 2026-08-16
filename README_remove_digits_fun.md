
## 42. Remove All Digits from a String

### Problem Statement
Write a C program to remove all digits from a string using a user-defined function.

### Algorithm
1. Start.
2. Declare a character array.
3. Read the string using `fgets()`.
4. Call the user-defined function.
5. Initialize `i` to 0 and `j` to 0.
6. Traverse the string using `i`.
7. Check whether the current character is a digit.
8. If it is not a digit, store it at position `j`.
9. Increment `j`.
10. Add `'\0'` at the end of the string.
11. Print the modified string.
12. Stop.

### Sample Input
abc123xyz45

### Sample Output
abcxyz
