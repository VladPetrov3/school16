#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include "cmath"
using namespace std;

int main()
{
    fstream file("17-1.txt");
    int x;vector<int>v;
    while(file >> x){
        v.push_back(x);
    }
    int c = 0,mx=0,sum =0;
    for(int i = 0;i < v.size()-1; i++){
            if(check(v[i],v[i+1]) == true){

            c++;
            sum= max(sum,v[i]+v[i+1]);
            }
        } cout << c << ' ' << sum;
    }


