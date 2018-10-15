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
int a,ta,b,tb,h,m,t,res;
int main(){
    scanf("%d %d",&a,&ta);
	scanf("%d %d",&b,&tb);
	scanf("%d:%d",&h,&m);
	t=60*h+m;
	for(int i=300;i<1440;i+=b)
		if(i+tb > t && i<t+ta)
		    res++;
	printf("%d\n",res);
}
