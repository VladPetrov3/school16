
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    fstream file("17-6.txt");
    int x;vector<int>v;
    while(file >> x){
        v.push_back(x);
    }
    int c = 0, mx1 = INT_MIN, mx,g;
    for(int i = 0; i < v.size(); i++ ){
        if(v[i] % 2 == 0){
            x +=v[i];
            g++;
        }
    }
    double sr = double(x)/g;

    for(int i = 0; i < v.size() - 1; i++){
        if((v[i] % 3 == 0  || v[i+1] % 3 == 0) && (v[i] < sr  || v[i+1] < sr)){
            c++;
            mx = v[i] + v[i+1];
            if(mx1 < mx ){
                mx1 = mx;
            }
        }
    }
    cout << c << ' ' << mx1;
}
