#include <iostream>

using namespace std;

/*
78)	�������� ���������� ������� F(n), ��� n � ����� �����, ����� ���������� �������������:
F(n) = n, ��� n <= 1,
F(n) = n + F(n / 3 - 1), ����� n > 1 � ������� �� 3,
F(n) = n + F(n + 3) , ����� n > 1 � �� ������� �� 3.
�������� ����������� �������� n, ��� �������� F(n) ���������� � ������ 1000.

*/
int c = 0;
int F( int n ){
    c++;
    if ( c > 1000){
        return 0;
    }
    if ( n <= 1) return n;
    else if ( n > 1 && n % 3 == 0 ) return n + F(n / 3 - 1);
    else if( n > 1 &&  n % 3 != 0) return  n + F(n + 3);
}


int main()
{
    for (int i = 0; i < 10000000; i++ ){
        c= 0;
        int r = F(i);
        if ( r  > 1000 && c <1000 ){

                cout << i;
                break;
        }
    }
}

