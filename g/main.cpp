#include <iostream>

using namespace std;

int main()
{
    for (int i = 1 ; i < 1000 ; i++){
    int s;
    s =i;
    int n = 5;
    while (s > 0) {
    s = s + n;
    n = n - 1;
    }
    if (s < 550){
    cout << i << endl;
    }
}


}
