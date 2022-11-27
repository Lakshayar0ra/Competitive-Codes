/**
 * Date - Nov. 27, 2022
 * Tags - constructive algorithms, graph matchings, implementation, shortest paths, *800
 * Type - CF/B
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;

	string a;
	cin >> a;

	while (t--) {
		for (int i = 0; i < a.length() - 1; i++) {
			if (a[i] == 'B' && a[i + 1] == 'G') {
				a[i] = 'G';
				a[i + 1] = 'B';
				i++;
			}
		}
	}
	cout << a;
	return 0;
}