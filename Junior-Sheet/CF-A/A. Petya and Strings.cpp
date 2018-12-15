/*Author : Abdallah Hemdan */ 
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

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
using namespace std ;
int main(){
    string s1 , s2 ; 
    cin >> s1 >> s2 ; 
    transform(s1.begin(),s1.end(),s1.begin(),::tolower) ; 
    transform(s2.begin(),s2.end(),s2.begin(),::tolower) ; 
    if(s1==s2)  cout << 0 << endl ;
    else if (s1>s2) cout << 1 << endl ; 
    else cout << -1 << endl ;
}
