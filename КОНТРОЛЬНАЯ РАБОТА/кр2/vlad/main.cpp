#include<iostream>
using namespace std;
int main()
{
for (int i = 1; i < 10000; i++){
    int x, a, b;
    x=i;
    a = 0; b = 1;
    while (x > 0) {
        if (x%2 > 0) a += x%11;
        else b *= x%11;
        x = x / 11;
    }
    if (a==2 && b ==9){
        cout << i << endl;
        break;
    }
}
}
