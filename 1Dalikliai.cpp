#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector <long long> arr;
    long long n, num;

    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            num = n / i;
            if (num != i) {
                arr.push_back(num);
                arr.push_back(i);
            }
            else arr.push_back(i);
        }
    }
    sort(arr.begin(), arr.end());

    cout << arr[0];
    for (int i = 1; i < arr.size(); i++) {
        cout << " " << arr[i];
    }
    return 0;
}