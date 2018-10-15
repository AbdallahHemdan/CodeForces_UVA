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

using namespace std;

int main()
{
    ll i,j,k;
    ll n,p,t;
    char tm,cr;
    string hm,aw;
    map<ll,char> home;
    map<ll,char> away;

    cin>>hm>>aw;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>t>>tm>>p>>cr;

        if(tm=='h')
        {
            if(home[p]!='r')
            {
                if(cr=='r')
                {
                    home[p]='r';
                    cout<<hm<<" "<<p<<" "<<t<<endl;
                }

                else
                {
                    if(home[p]=='y')
                    {
                        home[p]='r';
                        cout<<hm<<" "<<p<<" "<<t<<endl;
                    }

                    else
                        home[p]='y';
                }
            }

        }
        else
        {
            if(away[p]!='r')
            {
                if(cr=='r')
                {
                    away[p]='r';
                    cout<<aw<<" "<<p<<" "<<t<<endl;
                }

                else
                {
                    if(away[p]=='y')
                    {
                        away[p]='r';
                        cout<<aw<<" "<<p<<" "<<t<<endl;
                    }

                    else
                        away[p]='y';
                }
            }
        }

    }


    return 0;
}
