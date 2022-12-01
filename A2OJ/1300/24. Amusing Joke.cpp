/**
 * Date - Dec. 1, 2022
 * Tags - sorting, strings, implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	string n1, n2, s;
	cin >> n1 >> n2 >> s;
	n1 += n2;
	sort(n1.begin(), n1.end());
	sort(s.begin(), s.end());

	if (n1 == s) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}