
#include <iostream>
#include <vector>
using namespace std;


int n = 0;
int sm = 0;
int F(int n)
{
    if (n <= 1) {
        return n + 1;
    }
    return n + 1 + n + 5 + F(n - 1) + F(n - 2);
}




int main()
{

    while (true) {
        n += 1;
        sm = F(n);
        if (sm > 1000000) {
            cout << n << ' ' << sm;
            break;
        }
    }       
}
