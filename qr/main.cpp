#include<iostream>
using namespace std;
int main()
{
    int x, a, b;
    for (int i = 1; i < 100000; i++){
    x = i;
    a = 0; b = 0;
        while( x > 0 ) {
        x = x / 9;
        }
        if( x % 2 > 0)
        a = a + x % 9;
        else
        b = b + 1;
        if ( a == 11 && b == 3){
            cout << i << endl;
        }
    }
}
