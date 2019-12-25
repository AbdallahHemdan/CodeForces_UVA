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
string s,t;
cin>>s;
int n=s.size(),q,found_Sol=0;
    for(int i=0;i<=n-26;i++)
    {
        t=s.substr(i,26);
        q=0;
        set<char>se;
        bool vis[26]={};
        for(int j=0;j<26;j++)
        {
            if(t[j]=='?')
                q++;
            else
                se.insert(t[j]),vis[t[j]-'A']=1;
        }
        if(se.size()+q==26)
        {
            found_Sol=1;
            for(int j=i,a=0;a<26;j++,a++)
            {
                if(s[j]=='?')
                {
                    for(int k = 0; k < 26; k++)
                        if(!vis[K])
                        {
                            s[j] = k + 'A', vis[k] = 1;
                            break;
                        }
                }
            }
            break;
        }
    }
    if(found_Sol)
    {
       for(int i=0;i<n;i++)
            if(s[i]=='?')
                s[i]='A';
       cout<<s<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}
