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
    string s; 
    cin >> s ; 
    transform(s.begin(),s.end(),s.begin(),::tolower) ; 
    for(int i=0 ; i<s.size();i++)
        if(s[i]!='a' && s[i]!='e' && s[i]!='u' && s[i]!='o' && s[i]!='y' && s[i]!='u' && s[i]!='i' )
            cout << '.' << s[i] ; 
    
    
}
