#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	unsigned long long n, digit;
	bool nul = true;
	bool pirmas = true;
	vector <int> skaitm;
	cin >> n;

	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		skaitm.push_back(digit);
	}

	for (int i = skaitm.size()-1 ; i >= 0; i--) {
		if (skaitm[i] != 1 && skaitm[i] != 5) {
			if (skaitm[i] == 0 && pirmas)
			{

			}
			else
			{
				cout <<skaitm[i];
				nul = false;
				pirmas = false;
			}
				
		}
	}
	

	if (nul)
		cout << '0';
}