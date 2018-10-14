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
    int n ;
    cin >> n ;
    int counter = 0 ;
    for(int i=0 ; i<n ; i++){
        string s ;
        cin >> s;
        sort(s.begin(),s.end()) ;
        if(s[0]=='+')
            counter++ ;
        else if (s[0]=='-')
            counter-- ;
    }
    cout << counter<< endl ;
}
