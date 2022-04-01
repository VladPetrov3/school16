#include <iostream>

using namespace std;

int main()
{
    int c=0;
    for(int i = 1; i<100; i++){
        int d;
        int n=20,s=40;
        d = i;
        while(s+n<d){
            s= s-10;
            n=n-20;
        }
        if(n>0){
            c++;
        }

    }
    cout << c;
}
