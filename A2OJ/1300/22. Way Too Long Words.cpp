/**
 * Date - Dec. 1, 2022
 * Tags - strings, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		int size = s.size();
		if (size > 10) {
			cout << s[0] << size - 2 << s[size-1] << endl;
		} else {
			cout << s << endl;
		}
	}
	return 0;
}