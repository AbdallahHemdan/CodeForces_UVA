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
int n, d;
pair<int, int> p[100001];

bool cmp(pair<int,int> a , pair<int,int> b){
    if(a.first != b.first)
        return a.first < b.first ; 
    return a.second > b.second ;  
}
bool I_CAN(ll mid){
    int l = 0 , r = 0 ; 
    ll sum = 0 ; 
    while(r<n){
       sum+= p[r].second ; 
       while(p[r].first - p[l].first >=d){
           sum-= p[l].second ;
           ++l ; 
       }
       if(sum>=mid)
            return true ; 
        
        ++r ; 
    }
    
    return false ; 
}
int main(){
    cin >> n >> d ; 
    for(int i=0 ;i<n ; i++)
        cin >> p[i].first >> p[i].second ;
    sort(p,p+n,cmp) ; 
    ll left = 0 , right = 1e14+5 , mid , res = 0 ; 
    
    while(left<=right){
        mid = (left+right)/2 ; 
        if(I_CAN(mid)){
            left = mid+1 ; 
            res = mid ; 
        }
        else
            right = mid-1 ; 
    }
    
    cout << res << endl ;
}
