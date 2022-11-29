/**
 * Date - Nov. 29, 2022
 * Tags - implementation, math, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	if (n & 1) {
		cout << -1;
		return 0;
	}

	for (int i = 1; i <= n; i++) {
		if (i & 1) {
			cout << i + 1 << " ";
		} else {
			cout << i - 1 << " ";
		}
	}
	return 0;
}