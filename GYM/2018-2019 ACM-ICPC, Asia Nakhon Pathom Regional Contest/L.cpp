#include <bits\stdc++.h>
using namespace std;
int readInt() {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch - '0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result * 10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int n, m;  
int dp[1010][1010];
bool ok(int k) {
	for (int i = 1; i <= n - k + 1; i++) {
		for (int j = 1; j <= m - k + 1; j++) {
			int sm = dp[i + k - 1][j + k - 1] - dp[i + k - 1][j - 1] - dp[i - 1][j + k - 1] + dp[i - 1][j - 1]; 
			if (sm < 2) return 1;
		}
	}
	return 0; 
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int t = readInt();
	while (t--) {
		memset(dp, 0, sizeof dp);
		n = readInt();
		m = readInt();
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				dp[i][j] = readInt();
				dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
			}
		}
		int l = 0, r = min(n, m); 
		int ans = -1; 
		while (l <= r) {
			int mid = (l + r) >> 1; 
			if (ok(mid)) {
				ans = mid; 
				l = mid + 1; 
			}
			else {
				r = mid - 1; 
			}
		}
		cout << ans << endl;
	}
}
