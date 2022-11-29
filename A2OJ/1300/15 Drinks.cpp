/**
 * Date - Nov. 29, 2022
 * Tags - implementation, math, *800
 * Type - CF/B
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	double frac = 0.0;
	int i = n;
	while (i--) {
		double temp;
		cin >> temp;
		frac += temp;
	}

	cout << fixed << setprecision(10);
	cout << frac / n;
}