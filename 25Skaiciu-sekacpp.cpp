#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	vector <int> seka;
	int n, d=0,s=0,t=0,v=1;
	bool simt = false, tukst = false, desimt = false;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (tukst)
		{
			seka.push_back(t);
			i++;
		}
		if (simt)
		{
			seka.push_back(s);
			i++;
		}
		if (desimt)
		{
			seka.push_back(d);
			i++;
		}

		seka.push_back(v);
		v++;
		if (v > 9) {
			v = 0;
			d++;
			desimt = true;
		}
		if (d > 9) {
			d = 0;
			s++;
			simt = true;
		}
		if (s > 9) {
			s = 0;
			t++;
			tukst = true;
		}
	}


	cout << seka[n - 1];
}