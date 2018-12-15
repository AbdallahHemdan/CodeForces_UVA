    /*Author : Abdallah Hemdan */ 
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

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

using namespace std ; 
int main(){
    int i_location , j_location ; 
    int temp ; 
    for(int i=0 ;i<5 ; i++)
        for(int j=0 ;j<5 ; j++){
            cin >> temp ; 
            if(temp==1){
                i_location  = i ; 
                j_location = j ;
                break ; 
            }
        }
    cout << (abs(i_location-2)+abs(j_location-2)) << endl ;    
    
}
