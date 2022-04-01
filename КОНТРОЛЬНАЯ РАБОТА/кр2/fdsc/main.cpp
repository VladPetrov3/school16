#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int xy = 640*480;
    int I = 250*1024*8;
    int i = I/xy;
    int N = pow(2,i);
    cout << N;
}
