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
int res[100009] ; 
int main(){
    
int n , m ; 
cin >> n >> m ; 
int arr[n] ; 
for(int i=0 ;i<n ; i++)
    cin >> arr[i] ; 

set<int> st ; 

for(int i=n-1 ; i>=0 ;i--){
    st.insert(arr[i]) ; 
    res[i]=st.size() ; 
}

int x ; 
for(int i=0 ;i<m ; i++){
    cin >> x ; 
    cout << res[x-1] << endl ;
    }
}
