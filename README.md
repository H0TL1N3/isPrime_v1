# isPrime_v1
Very simple program to check whether n is prime.

The algorithm used ignores all even numbers except 2. The program does not accept numbers below or equal to 0 (i.e. negative numbers and 0), and will throw an exception if such a number is inputed into the program. 

All float numbers will be floored, because C++ floors them. At least that's what OnlineGDB did in testing. Rightfully so.

Strings are equal to 0 because C++.

In case of catastrophic failure (if an undefined exception will be caught), the program will inform the user of it.

The program uses the command-line interface or CLI. No GUI is planned.

## Examples:

**#1**:
```
Enter number for checking (floats will be floored): 
Input: 7759
Output: true
```
<sub>**Explanation:** 7759 is a prime number.</sub>

**#2**:
```
Enter number for checking (floats will be floored): 
Input: 4
Output: false
```
<sub>**Explanation:** 4 is a non-prime number.</sub>

**#3**:
```
Enter number for checking (floats will be floored): 
Input: 0
Output: Invalid action - either 0 or a negative number was used, or a non-integer variable was received as an input
```
<sub>**Explanation:** 0 is not a valid input, as described in the description.</sub>

**#4**:
```
Enter number for checking (floats will be floored): 
Input: -50
Output: Invalid action - either 0 or a negative number was used, or a non-integer variable was received as an input
```
<sub>**Explanation:** -50 is not a valid input, as described in the description.</sub>

**#5**:
```
Enter number for checking (floats will be floored): 
Input: 0.99
Output: Invalid action - either 0 or a negative number was used, or a non-integer variable was received as an input
```
<sub>**Explanation:** 0.99 was floored to 0. 0 is not accepted by the program.</sub>

**#6**:
```
Enter number for checking (floats will be floored): 
Input: 5.01
Output: true
```
<sub>**Explanation:** 5.01 was floored to 5. 5 is a prime number.</sub>

**#7**:
```
Enter number for checking (floats will be floored): 
Input: dsds
Output: Invalid action - either 0 or a negative number was used, or a non-integer variable was received as an input
```
<sub>**Explanation:** chars are converted to 0. The program does not accept such an input.</sub>

**#8 (Catastrophic failure!)**:
```
Enter number for checking (floats will be floored): 
Input: 42
Output: Undefined error. Check your system for stability.
```
<sub>**Explanation:** the intended output is "false". However, when an undefined exception is caught, the program throws an undefined error.</sub>
