/**
 * Date - Nov. 28, 2022
 * Tags - brute force, *800
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int y;
	cin >> y;

	while (true) {
		vector<int> freq(10, 0);
		int t = ++y;
		while (t) {
			freq[t % 10]++;
			t /= 10;
		}
		bool flag = true;
		for (int i = 0; i < 10; i++) {
			if (freq[i] > 1) {
				flag = false;
			}
		}
		if (flag) {
			cout << y;
			break;
		}
	}
	return 0;
}