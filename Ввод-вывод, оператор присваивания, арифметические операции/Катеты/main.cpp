#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a,b,c,n;
    cout << "������� �������� ������� ������: " << endl;
    cin >> a;
    cout << "������� �������� ������� ������: " << endl;
    cin >> b;
    c = (a*a) + (b*b);
    n = sqrt(c);
    cout << n;
    return 0;
}
