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
        ll d=0,u=0,l=0,r=0;
        string s;
        
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')
                r++;
            else if(s[i]=='L')
                l++;
            else if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
        }

        if((l+r+u+d)%2==0)
        {
            if(u==d && l==r)
            {
                cout<<"0"<<endl;
            }
            else
                cout<<(abs(u-d)+abs(l-r))/2<<endl;
        }

        else
            cout<<"-1"<<endl;

        return 0;


}
