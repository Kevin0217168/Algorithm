#include <iostream>
#include <stdio.h>

using namespace std;

char str[10];

int main(void) {
	freopen("csp2019pj_number.in", "r", stdin);
	freopen("csp2019pj_number.out", "w", stdout);

	cin >> str;
	int count = 0,
		i = 0;
	while (str[i] != '\0') {
		if (str[i] == '1')
			count++;
		i++;
	}
	cout << count;
	return 0;
}