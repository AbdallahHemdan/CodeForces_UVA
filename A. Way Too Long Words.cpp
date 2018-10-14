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
using namespace std ;
int main()
{
    int t ; 
    cin >> t ; 
    for(int i=0 ; i<t ;i++){
        string s ; 
    cin >> s ; 
    int len = s.length() ; 
    if(len>10){
        char c1 = s[0] ; 
        char c2 = s[len-1] ; 
        cout << c1 << len-2 << c2 << endl ;
    }
    else
        cout << s << endl ;
    }
}
