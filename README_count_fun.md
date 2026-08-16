## 39. Count the Frequency of a Given Character

### Problem Statement
Write a C program to count the frequency of a given character using a user-defined function.

### Algorithm
1. Start.
2. Declare a character array and a character variable.
3. Read the string using `fgets()`.
4. Read the character whose frequency is to be counted.
5. Call the user-defined function.
6. Initialize `count` to 0.
7. Traverse the string character by character.
8. If the current character matches the given character, increment `count`.
9. Return and print the frequency.
10. Stop.

### Sample Input
banana
a

### Sample Output
Frequency = 3


## 40. Replace Every Occurrence of a Character

### Problem Statement
Write a C program to replace every occurrence of a character with another using a user-defined function.

### Algorithm
1. Start.
2. Declare a character array.
3. Read the string using `fgets()`.
4. Read the character to be replaced.
5. Read the new character.
6. Call the user-defined function.
7. Traverse the string.
8. If the current character matches the old character, replace it with the new character.
9. Print the modified string.
10. Stop.

### Sample Input
banana
a
o

### Sample Output
bonono


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


## 43. Remove All Vowels from a String

### Problem Statement
Write a C program to remove all vowels from a string using a user-defined function.

### Algorithm
1. Start.
2. Declare a character array.
3. Read the string using `fgets()`.
4. Call the user-defined function.
5. Initialize `i` to 0 and `j` to 0.
6. Traverse the string character by character.
7. Check whether the current character is a vowel.
8. If it is not a vowel, store it at position `j`.
9. Increment `j`.
10. Add `'\0'` at the end of the string.
11. Print the modified string.
12. Stop.

### Sample Input
Hello World

### Sample Output
Hll Wrld


## 44. Remove Duplicate Characters from a String

### Problem Statement
Write a C program to remove duplicate characters from a string using a user-defined function.

### Algorithm
1. Start.
2. Declare a character array.
3. Read the string using `fgets()`.
4. Call the user-defined function.
5. Use an outer loop to select each character.
6. Use an inner loop to compare it with the following characters.
7. If a duplicate character is found, shift all the remaining characters one position to the left.
8. Continue the process until all duplicates are removed.
9. Print the modified string.
10. Stop.

### Sample Input
programming

### Sample Output
progamin


## 45. Remove All Occurrences of a Specified Character

### Problem Statement
Write a C program to remove all occurrences of a specified character using a user-defined function.

### Algorithm
1. Start.
2. Declare a character array and a character variable.
3. Read the string using `fgets()`.
4. Read the character to be removed.
5. Call the user-defined function.
6. Initialize `i` to 0 and `j` to 0.
7. Traverse the string using `i`.
8. If the current character is different from the specified character, store it at position `j`.
9. Increment `j`.
10. Add `'\0'` at the end of the string.
11. Print the modified string.
12. Stop.

### Sample Input
banana
a

### Sample Output
bnn
