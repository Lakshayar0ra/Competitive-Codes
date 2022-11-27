/**
 * Date - Nov. 27, 2022
 * Tags - implementation, math, *1000
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int fx, fy, fz;
	fx = fy = fz = 0;

	while (n--) {
		int tx, ty, tz;
		cin >> tx >> ty >> tz;
		fx += tx;
		fy += ty;
		fz += tz;
	}

	if (fx || fy || fz) {
		cout << "NO";
	} else {
		cout << "YES";
	}
  return 0;
}