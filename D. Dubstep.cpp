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
     string s ; 
     cin >> s ; 
bool flag = true ; 
     for(int i=0 ; i<s.length();)
     {
          
         if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
                {
                    i+=3 ;
                    if(flag==false)
            cout << " " ;
                }
         else
            {
                cout << s[i] ;
                 i++ ;
                 flag=false ;
            }
     }
 }
