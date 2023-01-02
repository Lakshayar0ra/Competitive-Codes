/**
 * Date - Jan. 2, 2023
 * Tags - math, *900
 * Type - CF/A
 */

/**
 * Approach - In this problem we need to understand how exactly numbers from 1 to n rearrange when we write firstly all odd numbers and
 * after them all even numbers. To find out which number stands at position k one needs to find the position where even numbers start and
 * output either the position of the odd number from the first half of the sequence or for the even number from the second half of
 * the sequence.
 */

#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	ll n, k;
	cin >> n >> k;

	if (k <= (n + 1) / 2) {
		cout << 2 * k - 1;
	} else {
		k -= ((n + 1) / 2);
		cout << 2 * k;
	}
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