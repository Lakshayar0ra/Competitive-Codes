/**
 * Date - Dec. 3, 2022
 * Tags - implementation, math, *1000
 * Type - CF/B
 */

/**
 * Approach -
 * We will bruteforce number of fingers that will be show Dima, then if total sum of fingers = 1 % (n+1), Dima will clean the room.
 * So we should increase answer if the remaining part after division by (n+1) is not 1.
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int sum = 0, c = 0;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		sum += t;
	}

	for (int i = 1; i <= 5; i++) {
		if ((sum + i) % (n + 1) != 1)
			c++;
	}
	cout << c;

	return 0;
}