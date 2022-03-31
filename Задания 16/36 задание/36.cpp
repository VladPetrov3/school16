
#include <iostream>

using namespace std;
int i = 0;
int F(int n, int m)
{
    if (m == 0)
        return n;
    else
        return F(m, n % m);
}



int main()
{
    int c = 0;
    for (int i = 100; i <= 1000; i++) {
        bool flag = false;
        for (int j = 100; j <= 1000; j++)
        {
            if (F(i, j) == 30) {
                c++;
                break;
            }
        }
    }
    cout << c;
}
