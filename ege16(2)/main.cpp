#include <iostream>
/*
78)	Алгоритм вычисления функции F(n), где n – целое число, задан следующими соотношениями:
F(n) = n, при n <= 1,
F(n) = n + F(n / 3 – 1), когда n > 1 и делится на 3,
F(n) = n + F(n + 3) , когда n > 1 и не делится на 3.
Назовите минимальное значение n, для которого F(n) определено и больше 1000.



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
