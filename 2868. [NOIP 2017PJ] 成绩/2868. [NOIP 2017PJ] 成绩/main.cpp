#include <iostream> 
#include <cstdio>
#include <cstring>

//#define DEBUG

using namespace std;

int main() {
#ifndef DEBUG
	freopen("nscore.in", "r", stdin);
	freopen("nscore.out", "w", stdout);
#endif
	int a, b, c;
	cin >> a >> b >> c;
	cout << a * 0.2 + b * 0.3 + c * 0.5;

	return 0;
}