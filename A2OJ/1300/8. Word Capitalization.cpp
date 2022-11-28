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

	char c = (char) toupper(s[0]);
	s[0] = c;
	cout << s;
	return 0;
}