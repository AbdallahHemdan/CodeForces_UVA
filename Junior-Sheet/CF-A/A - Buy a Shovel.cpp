/*Author : Abdallah Hemdan */ 
/***********************************************/
/* Dear online judge:
 * I've read the problem, and tried to solve it.
 * Even if you don't accept my solution, you should respect my effort.
 * I hope my code compiles and gets accepted.
 *  ___  __    	
 * |\  \|\  \	
 * \ \  \_\  \	
 *  \ \   ___ \emdan 
 *   \ \  \\ \ \     
 *    \ \__\\ \_\      
 *     \|__| \|__|     
 */

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
#include <array>
#include <tuple>
#include <utility>
#include <functional>
#include <locale>
#define     all(v)            v.begin(),v.end()
#define     mp                     make_pair
#define     pb                     push_back
#define     endl                     '\n'

typedef   long long int               ll ;

//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);

using namespace std ; 
int main(){
    int k , r ; 
    cin >> k >> r ; 
    for(int i=1 ; i<1000 ; i++){
        if((i*k-r)%10 == 0 || i*k%10 == 0 ){
            cout << i << endl ; 
            break ; 
        }
    }
}
