#include "BasicTools.h"

// #include <list>
// #include <vector>
// #include <iostream>
// #include <stdlib.h>
// #include <cmath>

// using namespace std;

/* ------basic_io------------------------------------ */

//
void printVector(const vector<int>& vct)
{
	for (unsigned int i = 0; i < vct.size(); i++)
	{
		cout << vct[i] << " ";
	}
	cout << endl;
}

/* ------basic_tools--------------------------------- */

// 
int getPstIntMod(int a, int n)
{
	return (a % n == 0) ? n : a % n;
}

// 
int getIntMod(int a, int n)
{
	return a % n;
}
/*
// 
int getNonNegMod(int a, int n)
{
	return 0;
}
*/
//
int getModFastPower(int base, int exp, int n)
{
	int ans = 1;
	while (exp > 0)
	{
		if ((exp & 1) == 1) {
			ans = (ans * base) % n;
		}
		exp = int(exp / 2);
		base = (base * base) % n;
	}
	return ans;
}

//
int getFastPower(int base, int exp)
{
	int ans = 1;
	while (exp > 0)
	{
		if ((exp & 1) == 1) {
			ans = ans * base;
		}
		exp = int(exp / 2);
		base = base * base;
	}
	return ans;
}

//
int getGCD(int a, int b)
{
	while (a % b != 0)
	{
		int mod = a % b;
		a = b;
		b = mod;
	}
	return b;
}

//
int getModInverse(int a, int n)
{
	for (int i = 1; i < n;i++)
	{
		if ((i * a) % n == 1) { return i; }
	}
}

/* ------easy_algorithm------------------------------ */

// 
bool doEratoshenes(int n)
{
	unsigned int upperLimit = unsigned int( sqrt(n) );
	vector<int> primeVector = {2};
	// vector<int>::iterator p1;  // 定义迭代器 用于遍历
	
	// 生成素数列表
	for (unsigned int i = 3; i <= upperLimit; i += 2)
	{
		for (unsigned int j = 0; j < primeVector.size(); j++)
		{
			if (i % primeVector[j] == 0) { break; }
		}
		primeVector.push_back(i);
	}
	// printVector(primeVector);  // check

	// 进行检验
	for (unsigned int i = 0; i < primeVector.size(); i++)
	{
		if (n % primeVector[i] == 0) { return false; }
	}

	return true;
}

//
void getPrimeByEra(int n, vector<int>& ans)
{
	vector<bool> isPrime(n + 1, true);  // assume all numbers to be prime
	isPrime[0] = isPrime[1] = false;

	for (int i = 2; i <= sqrt(n); i++)  // watch out UPLIMIT
	{
		if (!isPrime[i])  // known not prime
			continue;
		for (int j = 2; i * j <= n; j++)  // i is prime
		{
			isPrime[i * j] = false;
		}
	}

	ans.clear();
	for (int i = 2; i < n + 1; i++)
	{
		if (isPrime[i])
			ans.push_back(i);
	}

}

//
vector<int> getPrimeFact(int m)
{
	return vector<int>();
}

//
int getEulerFunc(int m)
{
	return 0;
}





