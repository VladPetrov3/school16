#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    fstream file ("2.txt");
    int x; vector <int> v;
    while (file >> x) v.push_back (x);
    int mx = INT_MIN; int c =0;
    int g = 0;
    for (int i=0; i< v.size()-2; i++ ) {
            if (v[i]%16 == 0 && v[i+1]%16 == 0 || v[i]%16 == 0 && v[i+2]%16 == 0 || v[i+1]%16 == 0 && v[i+2]%16 == 0) {
               c++;

               mx = max(v[i], v[i+1] );
               mx = max ( mx, v[i +2]);
               g += mx;
            }

    }
    cout << c << ' '<< mx;
}
