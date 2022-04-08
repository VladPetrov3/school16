#include <iostream>

using namespace std;
/*  F(n) = 0 при n = 0
    F(n) = F(n/2) - 1 при n > 0 для чётных n
    F(n) = 2 + F(n-1) при n > 0 для нечётных n

    Сколько существует чисел n, меньших 1000, для которых значение F(n) будет равно 3?
*/
int c1 = 0;
int c = 0;
int f( int n ){
    c1++;
    if ( c1 > 1000) return  0;
    if ( n == 0) return 0;
    if ( n > 0 && n % 2 == 0 ) return f(n/2) - 1;
    if ( n > 0 && n % 2 != 0 ) return 2 + f(n-1);

}
int main()
{
    for (int i = 0; i < 1000; i++){
        c1=0;

        int r = f(i);
        if ( r == 3) {
            c++;
        }
    }
    cout << c;
}
