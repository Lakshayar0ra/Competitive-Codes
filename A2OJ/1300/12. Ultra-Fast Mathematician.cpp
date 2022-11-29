/**
 * Date - Nov. 29, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	string out = "";
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == b[i]) {
			out += '0';
		} else {
			out += '1';
		}
	}

	cout << out;

	return 0;
}