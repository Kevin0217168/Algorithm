#include <iostream> 
#include <cstdio>
#include <cstring>

//#define DEBUG

using namespace std;

int main() {
#ifndef DEBUG
	freopen("title.in", "r", stdin);
	freopen("title.out", "w", stdout);
#endif
	char a[100];
	int ans = 0, len;
	cin.getline(a, 100, EOF);

	len = strlen(a);
	for (int i = 1; i <= len; i++)
		if (a[i] != ' ' && a[i] != '\n')ans++;
	cout << ans << endl;
	return 0;

}