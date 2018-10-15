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

string s1 , s2 , s3 , check ; 
cin >> s1 >> s2 >> s3 ; 
check = s1+s2 ; 
sort(s3.begin(),s3.end()) ; 
sort(check.begin(),check.end()) ; 
if(check==s3)
    cout << "YES" << endl ;
else
    cout << "NO" << endl ;

}
