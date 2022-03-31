
#include <iostream>

using namespace std;
//int i = 0;
int F(int n) {
    if (n <= 3) {
        return n;
    }
    if (n % 2 == 0 && n > 3) {
        return n + 3 + F(n - 1);
    }
    else if (n % 2 != 0 && n > 3) {
        return n * n + F(n - 2);
    }
}


int main()
{
    int c = 0;
    for (int i = 1; i < 1000; i++) {
        if (F(i) % 7 == 0) {
            c++;
        }
    }
    cout << c;
}
