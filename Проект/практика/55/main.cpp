#include <iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
vector<vector<int>> v(200, vector <int>(200,INT_MIN));
int game (int x, int y){
    if(v[x][y] != INT_MIN){
        return v[x][y];
    }
    if(x+y <= 20 ){
        return 0;
    }
    vector<int> neg, tmp;
    if (x - 1 > 0) {
        tmp.push_back(game(x - 1, y));
    }
    if (y - 1 > 0) {
        tmp.push_back(game(x, y - 1));
    }
    if (x > 1) {
        if (x % 2 == 0) {
            tmp.push_back(game(x / 2, y));
        } else {
            tmp.push_back(game(x / 2 + 1, y));
        }
    }

    if (y > 1) {
        if (y % 2 == 0) {
            tmp.push_back(game(x, y / 2));
        } else {
            tmp.push_back(game(x, y / 2 + 1));
        }
    }

    for(auto x: tmp){
        if(x<=0){
            neg.push_back(x);
        }
    }
    int res;
    if(!neg.empty()){
        res = -*max_element(neg.begin(),neg.end())+1; //+1 делаем потому что игрок смог выгирать он должен сдлеать ход в эту орицательную позицию, поэтому у нас +1. Количество ход по модулю.
    } else {
        res = -*max_element(tmp.begin(),tmp.end());
    }
    return v[x][y] = res;


}

int main()
{
    for(int i = 11; i < 100; i++){
        int r = game(i, 10);
        if (r == -1) {
            cout << "(" << i << ", " << 10 << ") " << r <<endl;
        }
    }
    for(int i = 11; i < 100; i++){
        int r = game(i, 10);
        if (r == 2) {
            cout << "(" << i << ", " << 10 << ") " << r <<endl;
        }
    }
    for(int i = 11; i < 100; i++){
        int r = game(i, 10);
        if (r == -2) {
            cout << "(" << i << ", " << 10 << ") " << r <<endl;
        }
    }
}
