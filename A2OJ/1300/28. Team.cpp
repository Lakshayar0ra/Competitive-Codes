/**
 * Date - Dec. 2, 2022
 * Tags - brute force, greedy, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int c = 0;
	while (n--) {
		int p1, p2, p3;
		cin >> p1 >> p2 >> p3;

		if (p1 + p2 + p3 > 1) {
			++c;
		}
	}
	cout << c;
}