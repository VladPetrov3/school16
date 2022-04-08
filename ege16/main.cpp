#include <iostream>

using namespace std;


int c = 0;
void F( int n )
{
  c += n +1;
  if( n > 1 ) {
     c += n *2;
    F(n-1);
    F(n-3);
    }
}



int main()
{
    for (int i = 0; i < 1000000; i++){
        c = 0;
        F(i);
        if( c >  1000000){
           cout << i << ' ';
           cout << c;
           break;
           }
    }
}
