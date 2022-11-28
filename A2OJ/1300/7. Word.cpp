/**
 * Date - Nov. 28, 2022
 * Tags - implementation, strings, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	string s;
	cin >> s;

	int count = 0;
	for (auto l : s) {
		if (l >= 65 && l <= 91) {
			++count;
		}
	}

	count <<= 1;
	if (count > s.length()) {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	} else {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}

	cout << s;
	return 0;
}