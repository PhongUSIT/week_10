#include <iostream>
#include <math.h>


using namespace std;

int Fibonacci_1(int n);
int Fibonacci_2(int n);


int main() {
	int n;
	cout << "nhap vao vi tri cua so fibonacci thu n: ";
	cin >> n;
	clock_t time_req;
	time_req = clock();
	int res = Fibonacci_2(n);
	cout << res << endl;
	time_req = clock() - time_req;
	cout << "Thoi gian ham Fibonacci_2 thuc thi: " << (float)time_req / CLOCKS_PER_SEC << " giay" << endl;

	time_req = clock();
	int res2 = Fibonacci_1(n);
	cout << res2 << endl;
	time_req = clock() - time_req;
	cout << "Thoi gian ham Fibonacci_1 thu thi: " << (float)time_req / CLOCKS_PER_SEC << " giay" << endl;
	return 0;
}


int Fibonacci_1(int n) {//su dung de quy
	if (n == 0)	 return 0;
	else if (n == 1 || n == 2) return 1;
	return Fibonacci_1(n - 1) + Fibonacci_1(n - 2);
}

int Fibonacci_2(int n) {//Su dung vong lap
	int fn = 0;
	int fn1 = 1;
	int fn2 = 1;
	if (n == 0) return 0;
	if (n == 1 || n == 2) return 1;
	for (int i = 3; i <= n; i++) {
		fn = fn1 + fn2;
		fn2 = fn1;
		fn1 = fn;
	}
	return fn;
}