/**
 * Date - Dec. 22, 2022
 * Tags - brute force, geometry, math, *1100
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

void solve() {
	int ab, bc, ca;
	cin >> ab >> bc >> ca;

	int b = sqrt((ab * bc) / ca);
	int a = ab / b;
	int c = ca / a;
	cout << 4 * a + 4 * b + 4 * c;
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