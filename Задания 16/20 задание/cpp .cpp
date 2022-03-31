
#include <iostream>
/*
		F(1) = G(1) = 1
		F(n) = 3·F(n–1) + G(n–1) – n + 5, если n > 1
		G(n) = F(n–1) + 3·G(n–1) – 3·n, если n > 1
*/
using namespace std;
int F(int n);
int G(int n);
int F(int n) {
	if (n == 1) {
		return 1;
	}
	if (n > 1) {
		return 3 * F(n - 1) + G(n - 1) - n + 5;
	}
}
int G(int n) {
	if (n == 1) {
		return 1;
	}
	if (n > 1) {
		return F(n-1) + 3*G(n-1) - 3*n;
	}
}
int main()
{
	cout << F(14) + G(14);
}
