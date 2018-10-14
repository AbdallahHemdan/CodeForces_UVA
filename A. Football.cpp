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
    bool flag = false ;
    int counter = 1 ;
    for(int i=0 ; i<s.size();i++)
    {
        if(s[i]==s[i+1])
            ++counter ;
        else
        {
            if(counter>=7)
            {
                flag = true ;
                break ;
            }
            else
            {
                counter = 1 ;
                flag = false ;
            }
    }
    }
     if(flag)
        cout << "YES" <<endl ;
    else
        cout << "NO" <<endl ;
}
