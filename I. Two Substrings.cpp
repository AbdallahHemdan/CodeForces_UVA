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

string s ; 
cin >> s ; 
int pos1 = s.find("AB") ; 
int pos2 = s.find("BA",pos1+2) ; 

int pos1_2 = s.find("BA") ; 
int pos2_2 = s.find("AB",pos1_2+2) ; 

if(pos1!=-1 && pos2!=-1 || pos1_2!=-1 && pos2_2!=-1)
    cout << "YES" << endl ; 
else
    cout << "NO" << endl ;
    
}
