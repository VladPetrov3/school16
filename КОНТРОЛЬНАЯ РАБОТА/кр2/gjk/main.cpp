#include <iostream>

using namespace std;

int main()
{
    for (int i=1; i<=10000; i++){
    int c;
    int a = 1;
    int b = 10;
    int x=i;
    while (x > 0){
        c = x % 10;
        a = a*c;
        if (c < b){
            b = c;
        }
        x = x / 10;
    }

    if ((a==45) && (b==5)){
        cout << i << endl;
    }
    }
}
