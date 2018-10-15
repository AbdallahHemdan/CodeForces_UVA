//Author:Hemdan
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

int s , n ; 
cin >> s >> n  ;
vector<pair<int, int >> pa ; 
int x , y ; 
bool flag = true ; 
for(int i=0 ;i< n ; i++){
    cin >> x >> y ; 
    pa.push_back(make_pair(x,y)) ; 
}
sort(pa.begin(),pa.end()) ; 
for(int i=0 ;i< n ;i++)
    if(s>pa[i].first)
        s+=pa[i].second ; 
    else{
        flag = false ; 
        break ;
    }
    
    
if(flag)
    cout << "YES" << endl ;
else
    cout << "NO" << endl ;
}
