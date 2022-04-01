#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool f (int x, int y, int a){
    return (5*y + 7*x != 129) || (3*x > a) || (4*y > a);
    }
int main()
{
    /*//((x → y) ∨ ¬(z → w)) ∧ ((w → ¬x) ∨ (¬y → z))
    cout << "x y z w" << endl;
    for(int x = 0; x < 2; x++){
        for(int y = 0; y < 2; y++){
            for(int z = 0; z < 2; z++){
                for(int w = 0; w< 2; w++){
                    bool f = ((!x || y) || (z && !w)) && ((!w || !x) || (y || z));
                    if (f == false){
                        cout << x << ' ' << y << ' ' << z << ' ' << w << endl;
                    }
                }
            }
        }
    }
    // bool f((!x || y) || (z && !w)) && ((!w || !x) || (y || z));*/
    /*int c = 0;
    for(int i = 1;i<1000;i++){
    int x = i;
    int s,n;
    s = 7 * (x / 8);
    n = 1;
    while (s < 300){
        s = s + 18;
        n = n * 3;
    }
    if( n == 81){
        c++;
    }
    }
    cout << c;
*/
   /* int c = 0;
    string arr_s[4]={"K","P","O","Y"};
    for(auto s1:arr_s){
        for(auto s2: arr_s){
            for(auto s3: arr_s){
                for(auto s4: arr_s){
                        string tmp = s1 + s2 + s3 + s4;
                        bool f= true;
                        for(auto s: arr_s){
                            if(count(tmp.begin(),tmp.end(),s[0] )!= 1){
                                f = false;
                                break;
                            }5
                        }
                        if(f && tmp.find("OY") == string::npos && tmp[0] != 'Y'){c++;}
                }
            }
        }
    }
    cout << c;
    */
   /* for (int a = 1; a < 1000; a++){
        bool flag = true;
        for (int x = 1;  x < 1000; x++){
            for(int y = 1; y < 1000;y++){
                if (!f(x,y,a)){
                	flag = false;
                	break;
                }
            }
            if (!flag) {
                break;
            }
        }
        if(flag == true){
            cout << a<< endl;
        }

    }
    */
    for (int i = 1; i < 1000; i++){
        int x,a,b;
        x=i;

        a = 0;
        b = 1;
        while (x > 0){
            if (x % 2== 0){
            a = a +x % 9;
            }
            else{
            b = b *(x % 9);
            }
            x = x / 9;g
        }
        if(a ==1 && b ==9){
            cout << i;
        }

    }

return 0;
}

