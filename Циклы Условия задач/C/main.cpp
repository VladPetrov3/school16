#include <iostream>
using namespace std;
int main()
{
  int n, sum=2;
  cin >> n;
  for (int i=0;i<n; i++){
    sum+=sum^i;
  }
  cout << sum;
}
