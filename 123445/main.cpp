#include <iostream>
using namespace std;

int main()
{
    int n,i=0;
    cin >> n;

    int k = 0, p = 1;
    while (p < n) {
        p *= 2;
        k ++;
    }
    cout <<k;
}
