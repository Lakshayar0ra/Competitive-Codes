/**
 * Date - Jan. 7, 2023
 * Tags - implementation, brute force, *900
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int min = INT_MAX;
	int ans = -1;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t < min) {
			min = t;
			ans = i + 1;
		} else if (t == min) {
			ans = -1;
		}
	}
	if (ans < 0) {
		cout << "Still Rozdil";
	} else {
		cout << ans;
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