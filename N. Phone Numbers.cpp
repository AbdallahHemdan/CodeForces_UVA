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

#define dbg printf("in\n");
#define nl printf("\n");
#define pp pair<int,int>
#define N 21

using namespace std;

inline bool ends_with(std::string const & value, std::string const & ending)
{
    if (ending.size() > value.size()) return false;
    return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}

bool cmp(string a,string b)
{
    return a.length()<b.length();
}

int main()
{
    int i,j,k;
    int n,m,x;
    string s, t;
    map<string,vector<string> > mp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        cin>>s;
        scanf("%d",&m);

        for(j=0;j<m;j++)
        {
            cin>>t;
            mp[s].push_back(t);
        }
    }

    vector<string> v;
    map<string,vector<string> >::iterator p=mp.begin();
    printf("%d\n",mp.size());
    while(p!=mp.end())
    {
        v.clear();
        v=p->second;
        sort(v.begin(),v.end(),cmp);

        for(i=0;i<v.size()-1;i++)
        {
            for(j=i+1;j<v.size();j++)
            {
                if(ends_with(v[j],v[i]))
                {
                    v[i]="#";break;
                }
            }
        }

        s=p->first;x=0;
        cout<<s<<" ";
        for(i=0;i<v.size();i++)
        {
            if(v[i]!="#")
                x++;
        }

        cout<<x<<" ";
        for(i=0;i<v.size();i++)
        {
            if(v[i]!="#")
                cout<<v[i]<<" ";
        }

        p++;printf("\n");
    }

    return 0;
}
