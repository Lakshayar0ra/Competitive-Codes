/**
 * Date - Nov. 29, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

/**
 * Approach -
 * The answer is number of leftmost soldier with the maximum height - 1 + n - number of rightmost soldier with the minimum height.
 * And if the leftmost soldier with the maximum height is more right then the rightmost soldier with the minimum height we should subtract one from the answer.
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[n];

	int sm = 0;
	int lg = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] <= arr[sm]) {
			sm = i;
		}
		if (arr[i] > arr[lg]) {
			lg = i;
		}
	}

	if (sm < lg) {
		cout << n - sm + lg - 2;
	} else {
		cout << n - sm + lg - 1;
	}
	return 0;
}