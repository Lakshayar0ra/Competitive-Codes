/**
 * Date - Nov. 30, 2022
 * Tags - constructive algorithms, implementation, math, *800
 * Type - CF/A
 */

/**
 * Approach -
 * The number of dragons D can be quite small, so the problem can be solved in a straightforward way, by iterating over dragons 1 through D and 
 * checking each dragon individually. Time complexity of such solution is O(D). There exists a smarter solution with O(1) complexity, based on
 * inclusion-exclusion principle. You'll have to count the numbers of dragons which satisfy at least one, two, three or four of the damage
 * conditions Ni, i.e., dragons who have index divisible by LCM of the corresponding sets of numbers. Remember that the number of numbers
 * between 1 and D which are divisible by T equals D / T. Finally, the number of dragons that get damaged equals N1 - N2 + N3 - N4. You'd have
 * to use this method if the total number of dragons was too large for iterating over it.
 *
 * Most Optimal Solution Code -
 *   1. long long k, l, m, n, d, ans=0, n1, n2, n3, n4;
 *   2. cin >> k >> l >> m >> n >> d;
 *   3. n1 = d/k + d/l + d/m + d/n;
 *   4. n2 = d/lcm2(k,l) + d/lcm2(k,m) + d/lcm2(k,n) + d/lcm2(l,m) + d/lcm2(l,n) + d/lcm2(m,n);
 *   5. n3 = d/lcm3(k,l,m) + d/lcm3(k,l,n) + d/lcm3(k,m,n) + d/lcm3(l,m,n);
 *   6. n4 = d/lcm4(k,l,m,n);
 *   7. ans = n1 - n2 + n3 - n4;
 *   8. cout << ans; 
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
	int k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;

	int count = 0;
	for (int i = 1; i <= d; i++) {
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
			++count;
		}
	}

	cout << count;
	return 0;
}