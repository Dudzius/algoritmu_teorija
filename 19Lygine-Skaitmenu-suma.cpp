#include <iostream>
using namespace std;

int main()
{
	unsigned int n;
	int sum = 0;
	cin >> n;

	while (n > 0)
	{
		int digit = n % 10;
		n /= 10;
		sum += digit;
	}
	if (sum % 2 == 0)
		cout << "NO";
	else
		cout << "YES";
}