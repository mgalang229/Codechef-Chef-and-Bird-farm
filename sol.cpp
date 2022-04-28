#include <bits/stdc++.h>

using namespace std;


// https://www.codechef.com/START36C/problems/BIRDFARM

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, z;
		cin >> x >> y >> z;
		if (z % x == 0 && z % y == 0) {
			cout << "ANY";
		} else if (z % x == 0) {
			cout << "CHICKEN";
		} else if (z % y == 0) {
			cout << "DUCK";
		} else {
			cout << "NONE";
		}
		cout << '\n';
	}
	return 0;
}
