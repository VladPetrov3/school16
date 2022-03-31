
#include <iostream>

using namespace std;
//int i = 0;
int F(int n);
int G(int n);
int F(int n) {
    if (n == 1) return 1;
    if (n > 1) return F(n - 1) - 2 * G(n - 1);
}
int G(int n) {
    if (n == 1) return 1;
    if (n > 1) return F(n-1) + 2*G(n-1);
}

int main()
{
    cout << G(21);
}
