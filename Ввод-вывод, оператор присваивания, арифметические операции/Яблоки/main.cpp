#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Rus");
    int n, k, c;
    cout << "¬ведите количество школьников - " << endl;
    cin >> n;
    cout << "¬ведите количество €блок - " << endl;
    cin >> k;
    c = k/n;
    cout << " аждому по " << c << endl;
    /*if ( k%n == 0) {
        cout >> " ст, прикол, получилось всем поровну";
    }else{
       cout>>"—той, не выбрасывай в мусорку €блоки, они же вкусные!";
    }
    */


    return 0;
}
