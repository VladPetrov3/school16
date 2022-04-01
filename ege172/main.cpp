#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    fstream file("17.txt");
    int x;vector<int>v;
    while(file >> x){
        v.push_back(x);
    }
    //cout << v.size() << endl;
    int c = 0;
    int mx = INT_MIN;
    for(int i = 0;i <v.size() - 1; i++){
        for( int j = i +1; j < v.size(); j++){
            if( (v[i] + v[j]) % 2  != 0  && (v[i] * v[j]) % 5  == 0){
                c++;
                mx = max( v[i] + v[j], mx);
            }
        }
    }
    cout << c << ' ' << mx;
}

