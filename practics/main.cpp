#include <iostream>
#include <vector>
using namespace std;


int main()
{
vector <int> f(10000,0);
f[8] = 1;
f[12] = 0
for (int i = 3;i <= 8; i++){
    if(i+1 <= 8){
        f[i*2] += f[i];
    }
    if (i+3 <=8){
        f[i*3] += f[i];
    }
    if (i*2 <=8){
        f[i*3] += f[i];
    }
}
for(int i =8; i<21;i++){
        f[i*2] +=f[i];
        f[i*3] +=f[i];
}
cout << f[3456];
}
