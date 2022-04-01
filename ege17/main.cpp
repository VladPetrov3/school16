#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
bool check(int y){
    if(y > 9 && y<100 && (y % 2 != 0) ){
            return true;
        }
    return false;
}



int main()
{
    fstream file("17-199.txt");
    int x;vector<int>v;
    while(file >> x){
        v.push_back(x);
    }
    int c = 0,mx=0,sum =0;
    for(int i = 0;i < v.size()-2; i++){
            if(check(v[i]) == false && check(v[i+1]) == true && check(v[i+2]) == false){

            c++;
            mx= max(mx,v[i]+v[i+1]+v[i+2]);
            }
        } cout << c << ' ' << mx;
    }


