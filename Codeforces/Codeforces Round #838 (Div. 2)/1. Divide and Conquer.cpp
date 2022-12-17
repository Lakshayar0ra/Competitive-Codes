/**
 * Date - Dec. 15, 2022
 * Tags - greedy, math, number theory
 * Type - CF/A
 * When - Live Contest
 */

/**
 * Approach -
 * If sum is even, answer is 0. Otherwise we need to change parity of atleast one element of a.
 * It it optimal to change parity of atmost one element.
 * Answer can be atmost 20, as we need to divide any integer x (1 <= x <= 10^6) atmost 20 times to change its parity.
 * Therefore solution can be given as -
 * We are assuming initial sum is odd. Suppose f(x) gives the minimum number of operations needed to change parity of x.
 * Iterate from i=1 to n and calculate f(ai) for each i.
 * Answer is minimum among all the calculated values.
 */

/*
 * Time complexity is O(n*log(Amax))
 */

#include<bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  long long ops = 0, sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  
  if (sum & 1) {
    ops = LLONG_MAX;
    for (int i = 0; i < n; i++) {
      long long steps = 0;
      int rem = a[i] % 2;
      while ((a[i] % 2) == rem) { // Check if parity is changed after performing one operation.
        ++steps;
        a[i] /= 2;
      }
      if (steps > 0) {
        ops = min(ops, steps); // Choose the number with minimum operations required.
      }
    }
  }
  
  cout << ops << "\n";
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