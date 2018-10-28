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
int main(){
    string ing ; 
    cin >> ing ;
    ll B_count=0 , S_count = 0 , C_count = 0 ; 
    for(int i=0 ;i<ing.size();i++)
        if(ing[i]=='B')
            B_count++ ; 
        else if (ing[i]=='S')
            S_count++ ; 
        else
            C_count++ ; 
    
    ll have_B = 0 , have_S = 0 , have_C = 0 ; 
    cin >> have_B >> have_S >> have_C ; 
    
    ll price_B=0,price_S=0,price_C=0 ; 
    cin >> price_B >>price_S >> price_C ; 
    
    ll money = 0 ; 
    cin >> money ; 
    
    ll left = 0 , right =10000000000000 ; 
    while(left+1<right){
        
        ll mid = (left+right)/2 ; 
        
        ll tot_price_B = price_B*((B_count*mid > have_B)? (B_count*mid-have_B) :0 ) ;     
        ll tot_price_S = price_S*((S_count*mid > have_S)? (S_count*mid-have_S) :0 ) ;     
        ll tot_price_C = price_C*((C_count*mid > have_C)? (C_count*mid-have_C) :0 ) ;
        
        if(tot_price_C+tot_price_S+tot_price_B <= money)
            left  = mid ;
        else 
            right = mid ; 
    }
    cout << left << endl ;
    
}
