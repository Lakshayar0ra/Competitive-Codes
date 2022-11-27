/**
 * Date - Nov. 27, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int i, j, t;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cin >> t;
			if (t) break;
		}
		if (t) break;
	}
	cout << abs(2 - i) + abs(2 - j);
	return 0;
}