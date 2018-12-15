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
    int n ; 
    cin >> n ;
    int res = 0 ;
    int t1 , t2 , t3 , count ; 
    while(n--){
        count = 0 ; 
        cin >> t1 >> t2 >> t3 ; 
        if(t1==1) count++ ; 
        if(t2==1) count++ ; 
        if(t3==1) count++ ; 
        if(count>=2)
            res++ ; 
    }
    cout << res << endl ;
}
