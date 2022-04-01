#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int x, c, n;
    cout << "Введите число, и я выведу следущие и предыдущие число:  " << endl;
    cin >> x;
    c=x+1;
    n=x-1;
    cout << "Следущие число после " << x << " будет " << c << "." << " А перед ним было - " << n <<endl;

    return 0;
}
