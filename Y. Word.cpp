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
using namespace std;
int main()
{
    string s ;
     cin >> s ;
     int count_l =0 , count_u=0 ;
      for(int i=0 ; i<s.size();i++)
      {
          (isupper(s[i]))?count_u++:count_l++ ;
      }
     (count_l>=count_u)?transform(s.begin(),s.end(),s.begin(),::tolower):
     transform(s.begin(),s.end(),s.begin(),::toupper);
     cout << s << endl ;

}
