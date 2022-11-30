/**
 * Date - Nov. 30, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int c = 0;
	int cur = 0;
	while (n--) {
		int a, b;
		cin >> a >> b;
		cur = cur - a + b;
		if (cur > c) {
			c = cur;
		}
	}

	cout << c;
	return 0;
}