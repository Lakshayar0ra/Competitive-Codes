/**
 * Date - Dec. 18, 2022
 * Tags - implementation
 * Type - CF/A
 * When - Live Contest
 */

#include<bits/stdc++.h>
#define ll long long
#define pb emplace_back

using namespace std;

void solve() {
	string t;
	cin >> t;
	int out = (t[0] - '0') + (t[2] - '0');
	cout << out << "\n";
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
