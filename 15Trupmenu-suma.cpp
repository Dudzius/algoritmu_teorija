#include <iostream>
#include <vector>
using namespace std;

int main()
{
	unsigned long long a, b, c,d, x,y,X,Y;
	bool liekana = true;
	unsigned long long sk;
	cin >> a >> b >>c >>d;
	if (d == b) {
		X = a + c;
		Y = b;
	}
	else {
		X = a * d+ c*b;
		Y = d * b;
	}
	x = X;
	y = Y;


	while (liekana) {
		if (x == 0) {
			sk = 1;
			liekana = false;
			break;
		}
		if (x > y) {
			x = x % y;
			if (x % y == 0) {
				sk = y;
				liekana = false;
			}

		}
		else if (y > x) {
			y = y % x;
			if (y % x == 0) {
				sk = x;
				liekana = false;
			}
		}
		else {
			sk = x;
			liekana = false;
		}
	}
	std::cout <<  X/ sk << " " << Y / sk;

}