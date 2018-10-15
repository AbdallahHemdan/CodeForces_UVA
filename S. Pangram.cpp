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
    
int n ; 
cin >> n ;
string s ; 
cin >> s ; 
transform(s.begin(),s.end(),s.begin(),::tolower) ; 
int arr[26] ;
for(int i=0 ;i<26 ;i++)
    arr[i]=0 ; 
bool flag = true ;
for(int i=0 ;i<n ;i++)
    arr[s[i]-'a']++ ; 
for(int i=0 ;i<26;i++)
    if(arr[i]==0){
        flag=false ; 
        break ;
    }
if(flag)
    cout << "YES" << endl ;
else
    cout << "NO" << endl ; 
}
