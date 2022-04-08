#include <iostream>

using namespace std;

/*
78)	Алгоритм вычисления функции F(n), где n – целое число, задан следующими соотношениями:
F(n) = n, при n <= 1,
F(n) = n + F(n / 3 - 1), когда n > 1 и делится на 3,
F(n) = n + F(n + 3) , когда n > 1 и не делится на 3.
Назовите минимальное значение n, для которого F(n) определено и больше 1000.

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

