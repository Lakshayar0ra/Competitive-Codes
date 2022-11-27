/**
 * Date - Nov. 27, 2022
 * Tags - expression parsing, implementation, *800
 * Type - CF/B
 */

#include<bits/stdc++.h>

using namespace std;

// Totally Acceptable Solution.
int brute_force() {
	string a;
	cin >> a;

	string out = "";
	for (int i = 0; i < a.length(); ++i) {
		if (a[i] == '.') {
			out += '0';
			continue;
		}
		else if (a[i] == '-' && a[i + 1] == '.') {
			out += "1";
		}
		else {
			out += "2";
		}
		++i;
	}
	cout << out;
	return 0;
}

// No need to use string and use lesser comparisions
int main() {
	char c;
	while (cin >> c) {	// "cin >> c" can be used to read unknown no. of integer values but "cin" will return "false in case of non-numeric values."
		if (c == '.') {
			cout << 0;
		}
		else {
			cin >> c;
			if (c == '.') {
				cout << 1;
			} else {
				cout << 2;
			}
		}
	}
	return 0;
}