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
int main(){
long long int size; 
cin >>size ; 
string s1 , s2 ; 
cin >> s1 >> s2 ; 
long long int num_of_ones=0; 
long long int num_of_zeros=0 ;
long long int ans =0 ; 
num_of_ones = count(s1.begin() , s1.end() , '1');
num_of_zeros = s1.length() - num_of_ones ;
   
for(long long int i=0 ; i<size ; i++)
{
// case 1 
if(s1[i]=='0' && s2[i]=='0')
   {
       ans+=num_of_ones ; 
       num_of_zeros-- ; 
   }
else if (s1[i]='1' && s2[i]=='0')
{ 
ans+=num_of_zeros ;   
  num_of_ones-- ; 
}     
}
cout << ans <<endl ; 
}
