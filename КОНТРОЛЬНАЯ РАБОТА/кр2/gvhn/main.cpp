#include <iostream>

using namespace std;

int main()
{
    int t=0;
    for (int i=1; i<=10000;i++){
    int s;
    s=i;
    int n = 1;

    while (s < 45) {
        s = s + 8;
        n= n * 3;
        }
    if (n==243){
        t++;
        }
    }
    cout << t;
}
