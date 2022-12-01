/**
 * Date - Dec. 1, 2022
 * Tags - implementation, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	long long s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;

	unordered_set<long long> s {s1, s2, s3, s4};

	cout << 4 - s.size();

	return 0;
}