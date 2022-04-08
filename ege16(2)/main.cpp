#include <iostream>
/*
78)	�������� ���������� ������� F(n), ��� n � ����� �����, ����� ���������� �������������:
F(n) = n, ��� n <= 1,
F(n) = n + F(n / 3 � 1), ����� n > 1 � ������� �� 3,
F(n) = n + F(n + 3) , ����� n > 1 � �� ������� �� 3.
�������� ����������� �������� n, ��� �������� F(n) ���������� � ������ 1000.



*/
int sum ( int n ){
    int sum = 0 ;
    while (n){
        sum +=n%10;
        n /=10;
    }
    return sum;

}
using namespace std;
int F(int n){
    if ( n > 25) return  2 * n * n * n + n * n;
    else return F(n+2) + 2 * F(n+3);
}

int main()
{
    cout << sum(F(2));
}
