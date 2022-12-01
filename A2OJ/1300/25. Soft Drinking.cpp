/**
 * Date - Dec. 1, 2022
 * Tags - implementation, math, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int a1 = (k * l) / nl;
	int a2 = p / np;
	int a3 = d * c;
	cout << min(a3, min(a1, a2)) / n;
	return 0;
}