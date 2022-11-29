/**
 * Date - Nov. 29, 2022
 * Tags - brute force, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	for (int i = n + 1; i <= m; i++) {
		bool isPrime = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			if (i < m) break;
			if (i == m) {
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";

	return 0;
}