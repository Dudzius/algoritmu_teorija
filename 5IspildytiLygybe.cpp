#include <iostream>
using namespace std;

//3a+5b=N
int main()
{
	unsigned long long N,a=0,b=0;

	cin >> N;
	while (N > 0) {
		if (N % 3 == 0) {
			a += N / 3;
			N = N % 3;
		}
		else if (N % 5 == 0) {
			b += N / 5;
			N = N % 5;
		}
		else {
			N = N - 3;
			a++;
		}

	}


	cout << a << " " << b;

}