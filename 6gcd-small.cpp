#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T;
	unsigned int a, b;
	vector<unsigned int> x, y;
	bool liekana = true;
	cin >> T;
	for (int i = 0; i < T; i++){
		cin >> a >> b;
		x.push_back(a);
		y.push_back(b);
	}

	for (int i = 0; i < T; i++) {
		while (liekana) {
			if (x[i] > y[i]) {
				x[i] = x[i] % y[i];
				if (x[i] % y[i] == 0) {
					cout << y[i]<<endl;
					liekana = false;
				}
					
			}
			else if (y[i] > x[i]) {
				y[i] = y[i] % x[i];
				if (y[i] % x[i] == 0) {
					cout << x[i]<<endl;
					liekana = false;
				}
			}
			else {
				cout << x[i] << endl;
				liekana = false;
			}
		}
		liekana = true;
	}

}