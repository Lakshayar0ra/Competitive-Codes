/**
 * Date - Jan. 7, 2023
 * Tags - implementation, brute force, math, *1000
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int c5 = 0, c0 = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t == 5) {
			c5++;
		} else {
			c0++;
		}
	}
	if (c0 > 0) {
		c5 = (c5 / 9) * 9;
		if (c5 == 0) {
			cout << 0;
		} else {
			for (int i = 0; i < c5; i++) {
				cout << 5;
			}
			for (int i = 0; i < c0; i++) {
				cout << 0;
			}
		}
	} else {
		cout << -1;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	// cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}