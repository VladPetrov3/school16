#include <iostream>
#include <vector>
#include <climits>
#include <fstream>
using namespace std;

int main()
{

    fstream file("1.txt");
    double x; vector<double>v;
    while(file >> x){
        v.push_back(x);
    }

    //int c = 0;
    double s = v[0],mx=0;

    for(int i  = 1; i < v.size(); i++ ){
        if(v[i] > v[i-1]){
            s+=v[i];
        }
        else{
            s = v[i];
        }
        mx = max(mx,s);
    }
    cout << int(mx);

}
