// A test file
#include "BasicTools.h"

#include <iostream>
#include <stdlib.h>
#include <cmath>
// #include <vector>

using namespace std;


int main()
{
	int n = 0;
	cin >> n;
	vector<int> vct;
	getPrimeByEra(n, vct);
	for (vector<int>::iterator it = vct.begin(); it != vct.end(); it++)
		cout << *it << ' ';
	cout << endl;
	return 0;
}