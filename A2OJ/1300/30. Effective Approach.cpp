/**
 * Date - Dec. 2, 2022
 * Tags - implementation, *1100
 * Type - CF/B
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> arr(n);
	map<int, pair<long long, long long>> q;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		q[arr[i]] = {i + 1, n - i};
	}

	int m;
	cin >> m;
	long long p1, p2;
	p1 = p2 = 0;
	for (int i = 0; i < m; i++) {
		int cur;
		cin >> cur;
		p1 += q[cur].first;
		p2 += q[cur].second;
	}

	cout << p1 << " " << p2;
}