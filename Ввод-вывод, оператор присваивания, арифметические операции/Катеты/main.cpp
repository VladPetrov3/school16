#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a,b,c,n;
    cout << "Введите значение первого катета: " << endl;
    cin >> a;
    cout << "Введите значение второго катета: " << endl;
    cin >> b;
    c = (a*a) + (b*b);
    n = sqrt(c);
    cout << n;
    return 0;
}
