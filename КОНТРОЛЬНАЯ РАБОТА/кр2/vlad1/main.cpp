#include <iostream>

using namespace std;

int main()
{
    for (int a = 0; a<1000;a++){
            bool flag= true;
        for(int x = 0; x < 1000; x++){
            bool f = (( (x & 13 == 0) && (x & a == 0)) || (x & 13 != 0)) || ((x & a != 0) && (x & 39 == 0));
            if (f == false){
                flag = false;
                break;
            }
        }
            if(flag == true){
                cout <<a<<endl;
                break;
            }
}
}
