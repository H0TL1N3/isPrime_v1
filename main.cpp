/**
 Very simple program to check whether n is prime.
 Made by H0TL1N3.
 **/
#include <iostream>
#include <cmath>

bool isPrime(int n) {
    // func only for positive numbers, ignore anything below and equal to 0
    if (n <= 0) { throw 42; }
    // 1 is non-prime by definition
    if (n == 1) { return false; } 
    // 2 and 3 are prime
    if (n == 2 || n == 3) { return true; } 
    // all even numbers (except 2) are non-prime
    if (n % 2 == 0) { return false; } 
    // main cycle - find any number by which n can be divided
    for (int i = 5; i < sqrt(n); i += 2) { 
        if (n % i == 0) { return false; }
    }
    // if no such number is found - n is prime
    return true;
}

int main()
{
    int n;
    // floats are floored because C++, chars are converted to 0 because C++
    std::cout << "Enter number for checking (floats will be floored): ";
    std::cin >> n;
    // try is used to catch negative and 0 number exceptions
    try {
        isPrime(n) ? std::cout << "true" : std::cout << "false"; 
    }
    catch (int errCode) {
        if (errCode == 42) { 
            std::cout << "Invalid action - either 0 or a negative number was used, or a non-integer variable was received as an input";
        }
    }
    catch (...) {
        std::cout << "Undefined error. Check your system for stability.";
    }

    return 0;
}
