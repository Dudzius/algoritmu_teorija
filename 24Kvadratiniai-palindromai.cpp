#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int palin(unsigned long long temp)
{
	unsigned long long digit;
	int j = 0, size = 0;
	vector <int> skaitm;
	while (temp > 0)
	{
		digit = temp % 10;
		temp /= 10;
		skaitm.push_back(digit);
	}
	size = skaitm.size() / 2;
	if (skaitm.size() % 2 == 0) {
		for (int i = (skaitm.size() / 2) - 1; i >= 0; i--) {
			if (skaitm[i] != skaitm[size + j]) {
				return 0;
			}
			j++;
		}
	}
	else {
		for (int i = (skaitm.size() / 2) - 1; i >= 0; i--) {
			++j;
			if (skaitm[i] != skaitm[size + j]) {
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	unsigned long long n, m, temp;
	bool emt = true;
	string t = "";
	cin >> n >> m;
	for (int l = n; l <= m; l++) {
		temp = l;
		if (palin(temp) == 1 && palin(temp*temp) == 1) {
			cout << t << temp;
			t = " ";
			emt = false;
		}
	}
	if (emt)
		cout << "0";
	
}