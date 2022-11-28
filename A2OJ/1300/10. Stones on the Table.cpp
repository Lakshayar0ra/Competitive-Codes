/**
 * Date - Nov. 28, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

/**
 * Approach - Count the number of consecutive pairs of equal letters.
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int count = 0;
	char c1;
	cin >> c1;
	--n;
	while (n--) {
		char c2;
		cin >> c2;
		if (c1 == c2) {
			++count;
		} else {
			c1 = c2;
		}
	}
	cout << count;
	return 0;
}