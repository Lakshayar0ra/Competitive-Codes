/**
 * Date - Nov. 30, 2022
 * Tags - greedy, sortings, strings, implementation, *800
 * Type - CF/A
 */

/**
 * Approach - Counting Sort
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	int arr[3] = {0, 0, 0};
	for (int i = 0; i < s.length(); i += 2) {
		++arr[s[i] - '0' - 1];
	}

	for (int i = 0, k = 0; i < 3; i++) {
		for (int j = 0; j < arr[i]; j++, k += 2) {
			s[k] = '0' + i + 1;
		}
	}
	cout << s;
	return 0;
}