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

map<string,string> mp ; 
int n,m ; 
cin >> n >> m ; 
string s1 , s2 ;
for(int i=0 ;i<m ;i++){
    cin >> s1 >> s2 ; 
    if(s1.size()<=s2.size())
        mp[s1]=s1 ; 
    else
        mp[s1]=s2 ; 
}
string str ; 
for(int i=0 ;i<n ;i++){
    cin >> str ; 
    cout << mp[str] << " " ; 
    }
}
