
#include <iostream>

using namespace std;
int i = 0;
void F(int n)
{
    i++;
    if (n >= 1) {
        i++;
        F(n - 1);
        F(n - 2);
        i++;
    }
}


int main()
{
    F(35);
    cout << i;
}
