#include <iostream>
#include <math.h>

using namespace std;

int giaithua(int x) {
	if (x == 0 || x == 1) return 1;
	return giaithua(x - 1) * x;
}

double solve_1(int n, int x) {//su dung de quy
	if (x == 0) return 0;
	if (n == 0) return 1;
	if (n == 1) return x;
	return solve_1(n - 1, x) + (pow(x, n) / giaithua(n));
}


double solve_2(int n, int x) {
	double sum = 0;
	if (x == 0) return 0;
	if (n == 0) return 1;
	for (int i = 1; i <= n; i++) {
		sum += pow(x, i) / giaithua(i);
	}
	return sum;
}

int main() {
	int n, x;
	cout << "nhap vao x va n: ";
	cin >> x >> n;
	double res = solve_1(n, x);
	cout << res << endl;
	double res2 = solve_2(n, x);
	cout << res2 << endl;
	return 0;
}