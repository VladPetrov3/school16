#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int n, k, c;
    cout << "������� ���������� ���������� - " << endl;
    cin >> n;
    cout << "������� ���������� ����� - " << endl;
    cin >> k;
    c = k/n;
    cout << "������� �� " << c << endl;
    /*if ( k%n == 0) {
        cout >> "���, ������, ���������� ���� �������";
    }else{
       cout>>"����, �� ���������� � ������� ������, ��� �� �������!";
    }
    */


    return 0;
}
