#include <iostream>

using namespace std;

int main()
{
    int L, R;
    int* arr;
    int size = 0;
    cin >> L >> R;
    size = R;
    int x = 0, dalik = 0, max = 0, temp = 0;

    arr = new int[size]();

    for (int i = 2; i <= size; i++) {
        if (arr[i] == 0)
        {
            arr[i] = i;
            for (int j = i; j <= size; j+=i) {
                if (arr[j]==0) {
                    arr[j] = i;
                }
            }
        }
            
    }
    x = R;
    for (int i = R; i >= L; i--)
    {
        dalik = 0;
        temp = i;
        while (temp > 1)
        {
            temp = temp / arr[temp];
            dalik++;
        }
        if (dalik > max)
        {
            max = dalik;
            x = i;
        }
            
    }
    cout << x;
    return 0;
}