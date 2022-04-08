#include <iostream>
#include <vector>
#include "set"

using namespace std;

int main(){
    vector <int> v ={1}; //Изначальное число
    int l = 0; //Стартовая длинна
    while(l!=7){ //цикл с макс длинной
        int n=v.size();
        for(int i=0;i<n;i++){
            int x=v[0];
            v.erase(v.begin());
            v.push_back(x+1);    //команды 
            v.push_back(x+5);
            v.push_back(x*3);
        }
        l++;
    }
    set<int>s(v.begin(),v.end()); //убираем повторные числа
    std::cout << s.size() << std::endl; //выводим ответ
    return 0;
}
