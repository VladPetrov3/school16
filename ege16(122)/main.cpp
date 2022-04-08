#include <iostream>

using namespace std;
/*F(0) = 3
F(n) = 1 + F(n / 2) если n > 0 и n чётное,
F(n) = F(n // 2) в остальных случаях.
Здесь // означает деление нацело. Определите количество значений n на отрезке [1, 1 000 000 000], для которых F(n) = 7.
*/
int c = 0;

int F(int n){
    c++;
    if ( c > 1000){
        return 0;
    }
    if ( n == 0) return 3;
    if (  n > 0  && n % 2 == 0) return 1 + F(n / 2);
    else return 1 + F(n / 2);

}
int main()
{
    int c1 = 0;
    for (int i = 1; i < 1 000 000 000; i++){
        c = 0;
        int r = F(i);
        if (c < 1000 && r == 7){
            c1++;
        }
    }
    cout << c1;
}
