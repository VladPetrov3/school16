#include <iostream>
#include <vector>
#include <set>


using namespace std;

int main()
{
    vector <int> v={1};
    int l=0;
    while (l!=8){
        int n = v.size();
        for (int i = 0; i < n;i++){
            int x = v[0];
            v.erase(v.begin());
            v.push_back(x+1);
            v.push_back(x+5);
            v.push_back(x*3);
        }
        l++;
    }
    int c =0;
    set <int> s(v.begin(),v.end());

    for (int x : s){
        if ( x >= 1000 && x <= 1024){
            c++;
        }
    }
    cout << c;
}
