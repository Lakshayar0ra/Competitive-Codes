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
	int sl = 0;
	int sr = 0;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a) ++sl;
		if (b) ++sr;
	}

	if (sl * 2 >= n) {
		sl = n - sl;
	}
	if (sr * 2 >= n) {
		sr = n - sr;
	}
	cout << sl + sr;
	return 0;
}