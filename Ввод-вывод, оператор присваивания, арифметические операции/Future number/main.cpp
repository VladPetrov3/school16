#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x, c, n;
    cout << "������� �����, � � ������ �������� � ���������� �����:  " << endl;
    cin >> x;
    c=x+1;
    n=x-1;
    cout << "�������� ����� ����� " << x << " ����� " << c << "." << " � ����� ��� ���� - " << n <<endl;

    return 0;
}
