/**
 * Date - Dec. 18, 2022
 * Tags - brute force
 * Type - CF/B
 * When - Live Contest
 */

#include<bits/stdc++.h>
#define ll long long
#define pb emplace_back

using namespace std;

void solve() {
	int a1, a2, a3, a4;
	cin >> a1 >> a2 >> a3 >> a4;
	bool ugly = true;
	for (int i = 0; i < 4; i++) {
		if (a1 < a2 && a3 < a4 && a1 < a3 && a2 < a4) {
			ugly = false;
			break;
		} else {
			int t1 = a1, t2 = a2, t3 = a3, t4 = a4;
			a1 = t3;
			a2 = t1;
			a3 = t4;
			a4 = t2;
		}
	}
	cout << (ugly ? "NO" : "YES") << "\n";
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