/**
 * Date - Dec. 16, 2022
 * Tags -  data structures, greedy, sorting
 * Type - CF/B
 * When - Live Contest
 */

/**
 * Approach -
 * Find the lowest tower that can move the block to tower 1, move a block, repeat.
 * When there are no more towers higher than tower 1, the process stops.
 * However, the constraints don't allow us to do exactly that. We'll have to make at most 109 moves per testcase.
 * Ok, let's move the blocks in bulk every time.
 * Since the lowest available tower will remain the lowest until you can't use it anymore, make all the moves from it at the same time.
 * If the current number of blocks in tower 1 is x and the current number of blocks in that tower is y, ceil((y-x)/2) blocks can be moved.
 */

/*
 * Time complexity is O(n*log n)
 */

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<ll> blk(n);
  for (int i = 0; i < n; i++) {
    cin >> blk[i];
  }
  sort(blk.begin() + 1, blk.end());
  for (int i = 1; i < n; i++) {
    if (blk[0] < blk[i]) {
      blk[0] += ((blk[i] - blk[0]) / 2) + ((blk[i] - blk[0]) % 2);
    }
  }
  cout << blk[0] << "\n";
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