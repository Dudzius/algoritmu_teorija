#include <iostream>
using namespace std;

void primeInRange(int L, int R)
{
    int flag;
    bool dvyniai = false;
    int temp=L;
    for (int i = L; i <= R; i++) {
        if (i == 1 || i == 0)
            continue;

        flag = 1;

        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {
            if (i - temp == 2) {
                dvyniai = true;
                break;
            }
            else {
                temp = i;
            }
        }
            
    }
    if (dvyniai)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    int n;
    cin >> n;

    primeInRange(n, 2*n);

    return 0;
}