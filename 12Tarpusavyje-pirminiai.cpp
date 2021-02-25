#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void findGCD(int n)
{
    int result = 1;
    string t = "";
    for (int i = 1; i <= n; i++)
    {
        result = gcd(i, n);

        if (result == 1)
            cout << t << i;
        t = " ";
    }
}

int main()
{
    int n;
    cin >> n;
    findGCD(n);
    return 0;
}