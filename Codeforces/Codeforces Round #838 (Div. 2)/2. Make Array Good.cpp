/**
 * Date - Dec. 17, 2022
 * Tags - constructive algorithms, implementation, number theory, sorting
 * Type - CF/B
 * When - Upsolving
 */

/**
 * Approach -
 * ## Method 1 -
 * Store all the given elements along with their original indices in an array of pairs a.
 * Now, sort a according to the value of first element in each pair (i.e. pair.first).
 * Iterate from i=2 to n and check if a[i].first is divisible by a[i-1].first.
 * If not, then calculate x that must be added to a[i].first which makes it divisble by a[i-1].first.
 * Store all such operations in another array res and print them.
 *
 * ## Method 2 - (Following the intution similar to GP therefore making every element power of 2)
 * There always exists a power of 2 in the range [x,2x] for any positive integer x.
 * Suppose f(ai) gives the smallest power of 2 which is greater than ai.
 * Iterate from i=1 to n and change ai to f(ai) by adding (f(ai) − ai) to i-th element.
 */

/*
 * Time complexity is O(n*log(Amax))
 */

#include<bits/stdc++.h>
#define ll long long
#define pb emplace_back

using namespace std;

void solve() {
	int n;
	cin >> n;
	cout << n << "\n";
	for (int i = 1; i <= n; i++) {
		ll t;
		cin >> t;
		ll np2 = 1;
		while (np2 < t) { // Calculating next power of 2 that lies between [ai, 2*ai]
			np2 *= 2;
		}
		/*
    ll np2 = 1 << (__lg(t) + 1);   // Shortcut method to calculate next power of 2
    */
		cout << i << " " << np2 - t << "\n";
	}
}

void unoptimized() {
	int n;
	cin >> n;
	vector<pair<ll, int>> a, res; // [{elememt, original index}, ...]
	for (int i = 0; i < n; i++) {
		ll t;
		cin >> t;
		a.pb(t, i + 1);
	}
	sort(a.begin(), a.end());
	for (int i = 1; i < n; i++) {
		if (a[i].first % a[i - 1].first != 0) {
			ll t = (a[i].first / a[i - 1].first + 1) * a[i - 1].first - a[i].first; // Calculating x
			a[i].first += t;
			res.pb(t, a[i].second);
		}
	}
	cout << res.size() << "\n";
	for (auto it : res) {
		cout << it.second << " " << it.first << "\n";
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