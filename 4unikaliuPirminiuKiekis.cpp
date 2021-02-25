#include <iostream>
using namespace std;

int main()
{
    int L, R;
    int* arr;
    int size = 0;
    cin >> L >> R;
    size = R+1;
    int x = 0, dalik = 0, max = 0, temp = 0, kart = 0;
    arr = new int[size]();

    for (int i = 2; i <= size; i++) {
        if (arr[i] <= 0)
        {
            arr[i] = i;
            for (int j = i; j <= size; j += i) {
                if (arr[j] <= 0) {
                    arr[j] = i;
                }
            }
        }

    }
    x = R;
    for (int i = L; i <= R; i++) {
        temp = i;
        while (temp > 1)
        {
            
            if (arr[temp] != dalik)
            {
                kart++;
                dalik = arr[temp];
            }
            else
                dalik = arr[temp];
            temp = temp / arr[temp];
        }
        if (kart >= max)
        {
            max = kart;
            x = i;
       }
        kart = 0;
    }

    cout << x;
    return 0;
}