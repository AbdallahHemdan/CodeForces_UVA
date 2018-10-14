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
    long long int  n , m , a ; 
    cin >> n  >> m >> a ; 
    long long int num_rows = n/a ; 
    if(n%a)
        num_rows++ ; 
    long long int num_col = m/a ; 
    if(m%a)
        num_col++ ; 
    cout << num_rows * num_col << endl ;
    
    
}
