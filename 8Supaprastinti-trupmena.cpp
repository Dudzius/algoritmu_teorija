#include <iostream>
#include <vector>
using namespace std;

int main()
{
	unsigned long long a, b,A,B;
	bool liekana = true;
	unsigned long long sk;
	cin >> a >> b;
	A = a;
	B = b;
		while (liekana) {
			if (a == 0) {
				sk = 1;
				liekana = false;
				break;
			}
			if (a > b) {
				a = a % b;
				if (a % b == 0) {
					sk = b;
					liekana = false;
				}

			}
			else if (b > a) {
				b = b % a;
				if (b % a == 0) {
					sk = a;
					liekana = false;
				}
			}
			else {
				sk = a;
				liekana = false;
			}
		}
		cout << A / sk << " " << B / sk;

}