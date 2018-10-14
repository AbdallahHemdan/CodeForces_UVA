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
    int n , k ;
    cin >>n>> k ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
        cin >> arr[i] ;
    int counter = 0 ;
    int m = arr[k-1] ;
    for(int i=0 ; i<n ; i++)
        if(arr[i]>=m && arr[i]>0 )
            counter++ ;
    cout << counter << endl ;
}
