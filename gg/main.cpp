#include <iostream>

using namespace std;

int main()
{
    cout << "a b c d f" << endl;
    for (int a=0; a<2; a++){
        for (int b=0; b<2; b++){
            for (int c=0; c<2; c++){
                    for (int d=0; d<2; d++){
                            bool f = ((!( !b||a) && (!c || d))!= (a && b && c && !d));
                            if (f==1){
                                cout << a << ' ' << b << ' ' << c << ' ' << d << ' ';
                                cout << f << endl;
                            }
                    }
            }
        }
    }

}

