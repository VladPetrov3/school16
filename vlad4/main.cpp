#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void F(int n){
    int y,z,w;
    y = n / 100;
    if(y == 4 || y == 9){
        if(y == 4){
           cout << "CD";
        }else cout << "CM";

    }else {
        if(y >= 5){
            cout<<"D";
            y -= 5;
        }
    }
        for(int i = 0; i<y;i++){
            cout<<"C";
        }
}






int main()
{
    int n;
    cin >> n;
    if( n <= 1 || n > 3999){
            cin >> n;
        }
    }

