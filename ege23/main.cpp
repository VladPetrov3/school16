#include <iostream>

using namespace std;
int defg(int x,int t){
    if ( x == t){
        return 1;
    }
    if(x > t){
        return 0;
    }
    else if(x < t) {
        return defg( x+1, t ) +  defg( x+3, t ) + defg( x*x, t ) ;
    }
}

int main() {
    for( int i = 2; i <= 19; i++){
    cout << defg(2,i) << endl;
    }
}
