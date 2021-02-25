#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector <long long> arr;
    long long n, num,ATS=0;

    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
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
    arr.pop_back();
    for (int i = 0; i < arr.size(); i++) {
        ATS += arr[i];
    }
    if (ATS == n)
        cout << "TAIP";
    else
        cout << "NE";
    return 0;
}