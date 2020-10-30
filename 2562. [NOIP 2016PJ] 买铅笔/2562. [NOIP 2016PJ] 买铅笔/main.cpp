#include <iostream> 
#include <cstdio>
#include <cmath>

//#define DEBUG

using namespace std;

int main() {
#ifndef DEBUG
	freopen("pencil.in", "r", stdin);
	freopen("pencil.out", "w", stdout);
#endif
	double num;
	int goods[10];
	cin >> num;
	for (int i = 0; i < 6; i++) {
		cin >> goods[i];
	}

	int min = 100000000;
	for (int i = 0; i < 6; i += 2) {
		// 数量向上取整后乘以单价
		int n = ceil(num / goods[i]) * goods[i + 1];
		if (min > n)
			min = n;
	}
	cout << min;
	

	return 0;
}