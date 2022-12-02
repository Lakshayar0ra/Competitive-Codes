/**
 * Date - Dec. 2, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int x = 0;
	while (n--) {
		string s;
		cin >> s;
		if (s.find("+") != string::npos) {
			++x;
		} else {
			--x;
		}
	}
	cout << x;
}