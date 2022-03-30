#include <iostream>     
#include <cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

const char oper[4] = { '/', '*','+','-' };



void A(int pred) {
    srand(time(NULL));

    float a = rand() % pred;
    float b = rand() % pred;
    char operloc = oper[rand() % 4];
    float ans=0; 
    switch (operloc)
    {
    case '+' : 
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '/':
         ans = a / b;
        break;
    case '*':
        ans = a * b;
        break;
    default:
        cout << "ERROR!";
        break;
    }
    cout << a << ' ' << operloc << ' ' << b << " = ";
    float anser; cin >> anser;
    if (ans == anser) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Error" << endl;
    }

}
void B(int pred) {
    srand(time(NULL));

    float a = rand()  % pred;
    a *= 0.1;
    float b = rand() % pred;
    b *= 0.1;

    char operloc = oper[rand() % 4];
    float ans = 0;
    switch (operloc)
    {
    case '+':
        ans = a + b;
        break;
    case '-':
        ans = a - b;
        break;
    case '/':
        ans = a / b;
        break;
    case '*':
        ans = a * b;
        break;
    default:
        cout << "ERROR!";
        break;
    }
    cout << a << ' ' << operloc << ' ' << b << " = ";
    float anser; cin >> anser;
    if (ans == anser) {
        cout << "Correct!" << endl;
    }
    else {
        cout << "Error" << endl;
    }

}
int main() {   
    int coin = 0;
    char exit = 'n';
    int pred = 0 ;
    while (exit != 'y') {
        cout << "integer or float?: ";
        char valnum; cin >> valnum;
        if (valnum == 'i') {
            cout << "predel: ";
            cin >> pred;
            A(pred);
        }
        else if (valnum == 'f') {
            cout << "predel ";
            cin >> pred;
            B(pred);
        }
        else { 
            cout << "Error!" << endl;
            continue; 
        }
        cout << "Do you want to go ? y/n ";
        cin >> exit;
    }
    return 0;
}
