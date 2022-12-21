/**
 * Date - Dec. 21, 2022
 * Tags - implementation,  *1000
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, ans = 0;
	cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i ++) {
		int t = 0;
		for (int j = 0; j < n; j ++) {
			if (x[j] < x[i] && y[j] == y[i])
				t |= 1;
			if (x[j] > x[i] && y[j] == y[i])
				t |= 2;
			if (x[j] == x[i] && y[j] < y[i])
				t |= 4;
			if (x[j] == x[i] && y[j] > y[i])
				t |= 8;
		}
		ans += (t == 15);
	}
	cout << ans;
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