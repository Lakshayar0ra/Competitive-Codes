/**
 * Date - Nov. 28, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	cin >> n;

	int count = 0;
	while (n) {
		int rem = n % 10;
		if (rem == 4 || rem == 7) {
			++count;
		}
		n /= 10;
	}

  // Only check for 4 or 7 because the count of 47 is not possible as (0 <= n <= 10^8)
	if (count == 4 || count == 7) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}