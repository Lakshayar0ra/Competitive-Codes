/**
 * Date - Dec. 18, 2022
 * Tags - greedy, math
 * Type - CF/C
 * When - Upsolving
 */

/**
 * Approach -
 * Start with the minimum value i.e. 1 and minimum step of 1
 * Check whether the slot for next k-1 elements is possible if we use current step.
 * If yes, then use the current step and increment the step
 * Otherwise, just fill all the next k elements using step of 1.
 */

/*
 * Time complexity is O(k)
 */

#include<bits/stdc++.h>
#define ll long long
#define pb emplace_back
#define deb(x) cout << #x << " : " << x << "\n"
using namespace std;

void solve() {
	int k, n;
	cin >> k >> n;
	int s = 1;
	int cur = 1;
	for (int i = 1; i <= k; i++) {
		cout << cur << " ";
		if ((n - cur - s) >= (k - i - 1)) {
			cur += s;
			++s;
		} else {
			++cur;
		}
	}
	cout << "\n";
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