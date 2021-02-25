#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	unsigned long long n, digit;
	bool nul = true;
	int c =0;
	string t = "";
	vector <int> skaitm;
	cin >> n;

	while (n > 0)
	{
		digit = n % 10;
		n /= 10;
		skaitm.push_back(digit);
	}

	for (int i = 0; i <= 9; i++)
	{
		c = count(skaitm.begin(), skaitm.end(), i);
		if (c ==3) {
			cout << t << i;
			t = " ";
			nul = false;
		}
	}
	
	if (nul)
		cout << '0';
}