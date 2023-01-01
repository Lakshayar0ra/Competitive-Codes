/**
 * Date - Jan. 1, 2023
 * Tags - implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = INT_MAX;
	pair<int, int> pos;
	for (int i = 0; i < n; i++) {
		int diff = abs(a[i] - a[(i + 1) % n]);
		if (min > diff) {
			min = diff;
			pos = {i + 1, (i + 1) % n + 1};
		}
	}
	cout << pos.first << " " << pos.second;
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