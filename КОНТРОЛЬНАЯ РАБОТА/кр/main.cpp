#include <iostream>

using namespace std;

int main()
{
    cout << "x" << " y " << "w " << "z"<< endl;
    for(int x = 0; x < 2; x++){
        for(int y = 0; y< 2; y++){
            for(int w = 0; w<2;w++){
                for(int z = 0; z<2; z++){
                    bool f = ((!x || w) || y && !z) &&((!y || !z) || x && !w);
                    if(f == false){
                         cout << x << ' ' << y  << ' ' << w  <<' '<< z<< endl;
                    }
                }
            }
        }
    }
}
