/**
 * Date - Nov. 28, 2022
 * Tags - implementation, *900
 * Type - CF/A
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int m[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int l;
			cin >> l;
			if (l % 2) {
				m[i][j] = !m[i][j];
				i - 1 >= 0 ? (m[i - 1][j] = !m[i - 1][j]) : NULL;
				i + 1 < 3 ? (m[i + 1][j] = !m[i + 1][j]) : NULL;
				j - 1 >= 0 ? (m[i][j - 1] = !m[i][j - 1]) : NULL;
				j + 1 < 3 ? (m[i][j + 1] = !m[i][j + 1]) : NULL;
			}
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << m[i][j];
		}
		cout << "\n";
	}

	return 0;
}