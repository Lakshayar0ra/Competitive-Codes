/**
 * Date - Dec. 1, 2022
 * Tags - brute force, strings, implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin >> str;
	unordered_set<char> s;
	for (auto i : str) {
		s.insert(i);
	}
	if (s.size() & 1) {
		cout << "IGNORE HIM!";
	} else {
		cout << "CHAT WITH HER!";
	}
	return 0;
}
