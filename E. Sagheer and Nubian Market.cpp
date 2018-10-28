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
#include <list>
#include <climits>
#include <cctype>
#include <bitset>
#include <numeric>
#include<array>
#include<tuple>
#include <utility>
#include <functional>
#include <locale>
#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
typedef   long long int               ll ;
using namespace std ;

int const N = 3e5+5 ;  
int n,s;
int arr[N] ; 
ll b_arr[N] ; 
bool I_CAN(int mid){
    for(int i=0 ;i<n ; i++)
        b_arr[i] = (1ll)*arr[i]+(1ll) * mid*(i+1) ; 
    sort(b_arr,b_arr+n) ; 
    ll sum = 0 ; 
    for(int i=0 ;i<mid ;i++){
        if(sum>s)
            return false ; 
        sum+=b_arr[i] ; 
    }
    return sum <=s ; 
    
}
int main(){
    cin >> n >> s ; 
    for(int i=0 ;i<n ; i++)
        cin >> arr[i] ; 
    int l=0 , r=n , res = -1 ; 
    while(l<=r){
        int mid = (l+r)/2 ; 
        if(I_CAN(mid)){
            l = mid+1 ; 
            res = mid ;
        }
        else 
            r = mid-1 ; 
    }
    if(res == 0)
        cout << 0 << " " << 0 << endl ;
    else {
    I_CAN(res);
    ll tot = 0;
    for(int i = 0; i < res; ++i)
      tot += b_arr[i];
    cout << res << " " << tot << endl ; 
  }
}
