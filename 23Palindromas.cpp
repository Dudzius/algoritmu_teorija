#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	unsigned long long n, digit;
	bool P = true;
	int j = 0,size=0;
	vector <int> skaitm;
	cin >> n;

	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		skaitm.push_back(digit);
	}
	size = skaitm.size()/2;
	if (skaitm.size() % 2 == 0) {
		for (int i = (skaitm.size() /2)-1; i >= 0; i--) {
			if (skaitm[i] != skaitm[size + j]) {
				P = false;
				break;
			}
			j++;
		}
	}
	else {

		for (int i = (skaitm.size() / 2) - 1; i >= 0; i--) {
			++j;
			if (skaitm[i] != skaitm[size + j]) {
				P = false;
				break;
			}
		}
	}


	if (P)
		cout << "TAIP";
	else
		cout << "NE";
}