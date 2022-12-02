/**
 * Date - Dec. 2, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	char c;
	bool flag = false;
	while (cin >> c) {
		if (c == 'H' || c == 'Q' || c == '9') {
			flag = true;
		}
	}

	cout << (flag ? "YES" : "NO");
	return 0;
}