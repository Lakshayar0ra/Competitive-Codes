/**
 * Date - Dec. 20, 2022
 * Tags - implementation,  *1000
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int n, m, ans, h, c;
	cin >> n >> m;
	h = -1;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		c = (t + m - 1) / m; // ceil(t/m)
		if (c >= h) {
			h = c;
			ans = i;
		}
	}
	cout << ans;
}

// Uses Extra Space and Time
void unoptimized() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	queue<int> p;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		p.push(i);
	}
	while (p.size() > 1) {
		int f = p.front();
		if (a[f] <= m) {
			a[f] = -1;
			p.pop();
		} else {
			a[f] -= m;
			p.pop();
			p.push(f);
		}
	}
	cout << p.front() + 1;
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
