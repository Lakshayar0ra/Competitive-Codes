/**
 * Date - Dec. 18, 2022
 * Tags - math
 * Type - CF/D
 * When - Upsolving
 */

/**
 * Approach -
 * The intution behind the approach is to find values of x for ech pair of elements inside array.
 * After finding suitable ranges of x for each pair, we can get the intersection range of x that is valid for whole array.
 * If there exists multiple x then print any one of them otherwise print -1.
 */

/*
 * Time complexity is O(n)
 */

#include<bits/stdc++.h>
#define ll long long
#define pb emplace_back
#define deb(x) cout << #x << " : " << x << "\n"
using namespace std;

void solve() {
	int n;
	cin >> n;

	vector<int> a(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int l = 0, r = 1e9;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			l = max(l, (a[i] + a[i + 1] + 1) / 2);
		}
		else if (a[i] < a[i + 1]) {
			r = min(r, (a[i] + a[i + 1]) / 2);
		}
	}
	cout << (l <= r ? l : -1) << '\n';
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