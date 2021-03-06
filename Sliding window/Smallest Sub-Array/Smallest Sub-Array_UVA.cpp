/*Author : Abdallah Hemdan */
/**************************/
/*Dear online judge:
* I've read the problem, and tried to solve it.
* Even if you don't accept my solution, you should respect my effort.
* I hope my code compiles and gets accepted.
*  ___   __
* |\  \|\  \
* \ \  \_\  \
*  \ \   ___ \emdan
*   \ \  \\ \ \
*    \ \__\\ \_\
*     \|__| \|__|
*/
#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <iomanip>
#include <assert.h>
#include <vector>
#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <set>
#include <complex>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <numeric>
#include <array>
#include <tuple>
#include <stdexcept>
#include <utility>
#include <functional>
#include <locale>
#define		  MP							make_pair
#define		  PB					     	push_back
#define		 endl			                  '\n'
#define		  Fir								 first
#define		  Sec								 second
#define       sz							  size()
#define       len							 length()
#define       IO 			ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define     all(v)	      			((v).begin()), ((v).end())
#define    rall(v)                  ((v).rbegin()), ((v).rend())
#define	  lop(i,init,n)		     	 for(int i=init;i<n;++i)
#define     Even(Num) 						Num % 2 == 0
#define   mms(Arr,Value)           memset(Arr,Value,sizeof(Arr))
#define   SetPre(Ans,num)	     fixed << setprecision(num) << (Ans)
#define     vi                           vector<int>
#define     vll                          vector<ll>
#define     si                            set<int>
#define     sll                           set<ll>
typedef   long long int                     ll;
typedef   long double                       ld;


const double EPS = 1e-9;
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 9;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

//ll GCD(ll a, ll b) {
//	if (b == 0) return a;
//	return GCD(b, a%b);
//}

//ll LCM(ll a, ll b) {
//	return a / (GCD(a, b))* b;
//}

// int nCr(int n, int r) {
// 	if (n < r)
// 		return 0;
// 	if (r == 0)
// 		return 1;
// 	return n * nCr(n - 1, r - 1) / r;
// }

const int dx[] = { 1,-1,0,0,0,0 };
const int dy[] = { 0,0,1,-1,0,0 };
const int dz[] = { 0,0,0,0,1,-1 };

using namespace std;

int freq[150];
int main() {
	IO;
	int t; 
	cin >> t; 
	lop(f,0,t){
		mms(freq, 0); 
		int n, m, k; 
		cin >> n >> m >> k;
		int Cnt = 0; 
		vi Arr(n+1);  
		int j = 1;
		int ans = INT_MAX; 
		lop(i, 1, n+1) {
			if (i <= 3) {
				Arr[i] = i; 
			}
			else {
				Arr[i] = (Arr[i - 1] + Arr[i - 2] + Arr[i - 3]) % m + 1; 
			}
			if (Arr[i] > k) {
				continue; 
			}
			if (freq[Arr[i]]++ == 0) {
				Cnt++;
			}
			while (j <= i && Cnt == k) {
				ans = min(ans, i - j + 1); 
				if (Arr[j] <= k && (--freq[Arr[j]] == 0)) {
					Cnt--; 
				}
				j++; 
			}
		}
		if (ans == INT_MAX) cout << "Case " << f + 1 << ": sequence nai" << endl;
		else cout << "Case " << f + 1 << ": " << ans << endl;
	}
	return 0; 
}
