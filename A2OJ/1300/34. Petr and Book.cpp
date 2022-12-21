/**
 * Date - Dec. 21, 2022
 * Tags - implementation,  *1000
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int sum = 0;
	vector<int> a(n);
	for (int i = 0; i < 7; i++) {
		cin >> a[i];
	}
	int i = 0;
	while (true) {
		sum += a[i];
		if (sum >= n) {
			break;
		}
		if (i == 6) {
			i = 0;
		} else {
			++i;
		}
	}
	cout << i + 1;
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