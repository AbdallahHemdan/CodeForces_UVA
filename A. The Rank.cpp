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
    int size ; 
    cin >> size ; 
    int a , b , c ,d ; 
    cin >> a >> b >> c >> d ; 
     int s = a+b+c+d ;
     int rank = 1 ; 
     for(int i=1 ; i<size ;i++)
          {
              cin >> a >> b >> c >> d ;
              if(a+b+c+d>s)rank++ ; 
          }
          cout << rank << endl ;
}          
