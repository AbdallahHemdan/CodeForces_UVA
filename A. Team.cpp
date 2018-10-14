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
   ll size ; 
   cin >> size ; 
   ll arr[size][3] ;
   ll res = 0 ; 
    for(ll i =0 ; i<size ; i++)
        for(ll j =0 ; j<3 ; j++)
            cin >> arr[i][j] ;
    for(ll i =0 ; i<size ; i++){
        ll counter = 0 ;
        for(ll j =0 ; j<3 ; j++)
            if(arr[i][j]==1)
                counter++ ;
    if(counter>=2)
        res++ ; 
     }
    cout << res << endl ;
}
