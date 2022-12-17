/**
 * Date - Dec. 16, 2022
 * Tags - implementation
 * Type - CF/A
 * When - Live Contest
 */

/**
 * Approach -
 * A horizontal cut is possible if all y-coordinates are different (we can draw it through a vertex with the median y-coordinate);
 * A vertical cut is possible if all x-coordinates are different (we can draw it through a vertex with the median x-coordinate).
 * So, all we need to check is the following pair of conditions: (i) all xi are different, (ii) all yi are different.
 */

/*
 * Time complexity is O(1)
 */

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
	ll x1, x2, x3, y1, y2, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	if ((x1 == x2 || x2 == x3 || x3 == x1) && (y1 == y2 || y2 == y3 || y3 == y1)) {
		cout << "NO" << "\n";
	} else {
		cout << "YES" << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}