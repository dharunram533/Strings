## 41. Remove All Spaces from a String

### Problem Statement
Write a C program to remove all spaces from a string using a user-defined function.

### Algorithm
1. Start.
2. Declare a character array.
3. Read the string using `fgets()`.
4. Call the user-defined function.
5. Initialize `i` to 0 and `j` to 0.
6. Traverse the string using `i`.
7. If the current character is not a space, store it at position `j`.
8. Increment `j`.
9. Add `'\0'` at the end of the string.
10. Print the modified string.
11. Stop.

### Sample Input
hello world

### Sample Output
helloworld
