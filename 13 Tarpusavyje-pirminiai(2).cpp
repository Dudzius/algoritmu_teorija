#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void findGCD(int p, int q)
{
    int result = 1, dalik = 0, j;
    bool nul = true;
    string t = "";

    for (int i = 1; i * i <= p; i++)
    {
        if (p % i == 0) {
            dalik = i;
            result = gcd(dalik, q);

            if (result == 1)
                cout << t << i;
            t = " ";
            nul = false;
        }
    }
    for (int i = sqrt(p); i >= 1; i--)
    {
        j = p / i;
        if (p % j == 0) {
            dalik = j;
            result = gcd(dalik, q);

            if (result == 1)
                cout << t << j;
            t = " ";
            nul = false;
        }
    }
    if (nul)
        cout << "0";
}

int main()
{
    int p, q;
    cin >> p >> q;
    findGCD(p, q);
    return 0;
}