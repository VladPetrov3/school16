
#include <iostream>

using namespace std;
//F(n) =  n * n + 5 * n + 4, при n > 30
//F(n) = F(n + 1) + 3 * F(n + 4), при чётных n <= 30
//F(n) = 2 * F(n + 2) + F(n + 5), при нечётных n <= 30

int F(int n) {
    if (n > 30) {
        return n * n + 5 * n + 4;
    }
    if (n % 2 == 0 && n <= 30) {
        return F(n + 1) + 3 * F(n + 4);
    }
    else if (n % 2 != 0 && n <= 30) {
        return 2 * F(n + 2) + F(n + 5);
    }
}
int sum(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int c = 0;
    for (int i = 1; i <= 1000; i++) {
        if (sum(F(i)) == 27) {
            c++;
        }
    }
    cout << c;
}
