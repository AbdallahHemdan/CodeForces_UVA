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
int main()
{
    int n , k ; 
    cin >> n >> k ;
     int  sum = 0 ; 
     int x , y ; 
     while(n--)
     {
        cin >> x >> y ; 
       sum+=(y-x)+1 ; 
     }
     if(sum%k==0)
       cout << 0 << endl; 
       else 
     cout << k-(sum%k) << endl ;
        
    
}
