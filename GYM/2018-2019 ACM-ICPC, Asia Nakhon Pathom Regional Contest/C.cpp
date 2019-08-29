#include <bits\stdc++.h>
#define ll long long int 
#define all(a)  (a.begin(),a.end())
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

const int maxn = 5e3 + 53; 
struct beast {
	int h, e;
}a[maxn];
int dp[maxn];

bool cmp(beast a, beast b) {
	if (a.h < b.h) return 1;
	if (a.h == b.h) {
		return (a.e < b.e);
	}
	return 0;
}
int main() {
	IO;
	int n, w; cin >> n >> w;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].h; 
		a[i].e = i; 
	}
	stable_sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i <= n; i++) {
		for (int j = i + 1; j <= n; j++) {
			if (a[i].e + w >= a[j].e and a[i].e - w <= a[j].e and a[i].h < a[j].h) {
				dp[j] = max(dp[j], dp[i] + 1); 
			}
		}
	}
	int final_ans = -1; 
	for (int i = 1; i <= n; i++) {
		final_ans = max(final_ans, dp[i]);
	}
	cout << final_ans << endl;
}
