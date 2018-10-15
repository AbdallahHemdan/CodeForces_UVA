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
int n;
cin >> n ; 
int a[n];
for(int i=0 ;i<n ; i++)
    cin >> a[i] ; 
    
    if(a[n-1] == 0)
        cout<< "UP" <<endl;
    else if(a[n-1] == 15)
        cout<< "DOWN" <<endl;
    else if(n < 2)
        cout<< -1 <<endl;
    else if(a[n-1]> a[n-2])
        cout<< "UP"<<endl;
    else 
        cout<< "DOWN"<<endl;   
}
