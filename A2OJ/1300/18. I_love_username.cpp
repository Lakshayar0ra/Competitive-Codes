/**
 * Date - Nov. 30, 2022
 * Tags - brute force, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int lg, sm, am = 0;
	cin >> lg;
	sm = lg;
	while (--n) {
		int s;
		cin >> s;

		if (s > lg) {
			++am;
			lg = s;
		} else if (s < sm) {
			++am;
			sm = s;
		}
	}

	cout << am;
	return 0;
}