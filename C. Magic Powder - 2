// Author : Hemdan
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
const int N = 1e5+5 ; 
int need[N] , have[N] ;
int n,k ;

    bool I_Can(int mid){
        ll m = k ;
        for(int i=0 ;i<n ; i++){
            
            ll n = (ll)need[i]*mid-have[i] ; 
            if(n < 0 )
                continue ; 
            m-= n ; 
            
            if(m<0)
                return false ; 
        }    
        return true ; 
    }
    
int main(){
    cin >> n >> k ;
    for(int i=0 ;i<n ; i++)
        cin >> need[i] ; 
    for(int i=0 ;i<n ; i++)
        cin >> have[i] ;
        
    ll left = 0 , right = 2e9+1 , res = 0 ; 
    
    while(left<=right){
        ll mid = (left+right)/2 ; 
        if(I_Can(mid)){
            left = mid+1 ; 
            res = mid ;     
        }
        else
            right = mid - 1 ; 
    }
    cout << res << endl ;
}
