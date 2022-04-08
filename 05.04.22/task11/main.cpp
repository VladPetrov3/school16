#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
#include <climits>
#include <algorithm>

using namespace std;

int main()
{
    fstream file ("3.txt");
    int x; vector <int> v;
    while (file >> x) v.push_back (x);
    int mn = INT_MAX, c =0,mx1=INT_MIN;
    for(int i =0; i < v.size(); i++){
        if (v[i]%111==0) {
            mx1 = max (mx1, v[i]);
        }
    }
    int g = 0;
    for (int i=0; i< v.size()-1; i++ ) {
            if (v[i]>mx1 && v[i+1]%7==0 || v[i+1]>mx1 && v[i]%7==0) {
               c++;

               mn = min (mn, v[i] + v[i+1]);
            }

    }
    cout << c << ' '<< mn;

}
