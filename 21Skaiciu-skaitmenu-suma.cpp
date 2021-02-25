#include <iostream>
#include <algorithm>

using namespace std;

long long Sum(long long n, int arr[])
{
    int len, size, num;
    if (n < 10)
        return (n * (n + 1) / 2);

    len = (int)(log10(n));
    size = (int)(ceil(pow(10, len)));
    num = n / size;

    return (num * arr[len] + (num * (num - 1) / 2) * size + num * (1 + n % size) +
        Sum(n % size, arr));
}
long long S(long long n)
{
    int len;
    len = (int)(log10(n));
    int* arr = new int[len + 1];
    arr[0] = 0; arr[1] = 45;

    for (int i = 2; i <= len; i++)
        arr[i] = arr[i - 1] * 10 + 45 *
        (int)(ceil(pow(10, i - 1)));

    return Sum(n, arr);
}

int main()
{
    int n;
    cin >> n;
    cout << S(n);
}