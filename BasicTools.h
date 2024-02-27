#pragma once

// Basic tools for my number theory gadget.
// Pst as Positive
// Neg as Negative
// 

 #include <list>
 #include <vector>
 #include <iostream>
 #include <stdlib.h>
 #include <cmath>

using namespace std;

/* ------basic_io------------------------------------ */

// Prints vector<int>. Tested ok.
void printVector(const vector<int>& vct);

/* ------basic_tools--------------------------------- */

// Calculates (a mod b) and makes it a positive integer.
int getPstIntMod(int a, int n);

// Calculates (a mod b) and makes it an integer.
int getIntMod(int a, int n);

// Calculates (a mod b) and makes it an nonegative integer. Temporarily useless.
// int getNonNegMod(int a, int n);

// Calculates mod fast power. base^exp mod n
int getModFastPower(int base, int exp, int n);

// Calculates fast power. base^exp
int getFastPower(int base, int exp);

// Calculates gcd(a, b).
int getGCD(int a, int b);

// Calculates n-modular inverse of a. a^-1 mod n
int getModInverse(int a, int n);

/* ------easy_algorithm------------------------------ */

// Judges by Eratoshenes Sieve if n is a prime number.
bool doEratoshenes(int n);

// Gets all Prime lower than n.
void getPrimeByEra(int n, vector<int>& ans);

// Calculates Prime factorization.
vector<int> getPrimeFact(int m);

// Calculates Euler function. ¦Õ(m)
int getEulerFunc(int m);

// Calculates s, t in s*a+t*b=(a,b).
int getWhat(int a, int b);


