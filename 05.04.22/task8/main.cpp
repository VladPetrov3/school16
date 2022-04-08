#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int main()
{
    fstream file ("1.txt");
    int x; vector<int> v;
    while(file >> x){
        v.push_back(x);
    }
    double sum = 0; int c =0;
    for (int i = 0 ;i < v.size(); i++){
        c++;
        sum+=v[i];
    }
    double srd = sum / c;

    int c1 = 0,mx = INT_MIN;
    for(int i = 0; i < v.size() -2;i++){
        if ( (v[i] < srd && v[i+1] < srd )||( v[i] < srd && v[i+2] < srd )|| (v[i+1] < srd && v[i+2] < srd)){
            if (abs(v[i]) % 100 == 14 || abs(v[i+1]) % 100 == 14 || abs(v[i+2]) % 100 == 14 ){
                c1++;
                mx = max(mx ,v[i] + v[i+1] + v[i+2]);
            }
        }
    }
    cout << c1 << ' ' << mx;
}
