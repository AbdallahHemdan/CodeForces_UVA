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

int n , m ; 
cin >> n >> m ; 
map<string,string> mp ; 

string name,ip,temp1,temp2; 
for(int i=0 ;i<n ;i++){
    cin >> name >> ip ; 
    mp[ip]=name ; 
}
for(int i=0 ; i<m ; i++){
   cin >> temp1 >> temp2 ; 
   string lol  = temp2.substr(0, temp2.size()-1);
   cout << temp1 << " " << temp2 << " #" << mp[lol] << endl ;
    }
}
