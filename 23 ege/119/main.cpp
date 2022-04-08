#include <iostream>
#include <vector>
#include "set"

using namespace std;
int c=0;
int main(){
    vector <int> v ={1}; //Изначальное число
    int l = 0; //Стартовая длинна
    while(l!=8){ //цикл с макс длинной
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
    for(int x:s){ //перебираем числа по условию отрезка
        if(x>=1000 && x<=1024){
            c++; //кол-во таких чисел
        } 
    }
    std::cout << c << std::endl; //Ответ
    return 0;
}
