#include <iostream>

using namespace std;
bool f (int x, int a){
    return ((x % a != 0 || x % 36 != 0) || x % 324 == 0) && a > 100;
    }
int main()
{
    //((x % a != 0 || x % 36 != 0) || x % 324 == 0) && a > 100;
    //((ДЕЛ(x, A) ∧ ДЕЛ(x, 36)) → ДЕЛ(x, 324)) ∧ (A > 100)
    for (int a = 1; a < 10000; a++){
        bool flag = true;
        for (int x = 1;  x < 10000; x++){
            if (!f(x,a)){
                flag = false;
            }

        }
        if(flag == true){
            cout << a<< endl;
            break;
        }

    }

return 0;
}
