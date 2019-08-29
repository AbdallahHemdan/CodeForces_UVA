#include <bits\stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t; cin >> t; 
	for (int tc = 1; tc <= t; ++tc) {
		int n; cin >> n; 
		vector<int> a(n);
		for (int& i : a) cin >> i;
		int ans = 0; 
		for (int i = 0; i < n;) {
			i = upper_bound(a.begin() + i, a.end(), a[i] + 20) - a.begin();
			++ans;
		}
		cout << ans << endl;
	}
}
