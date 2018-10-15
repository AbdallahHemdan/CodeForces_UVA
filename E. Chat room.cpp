#include <iostream>
using namespace std ; 
int main(){
string hello="hello";
string str;
cin>>str;

int length=str.length();
int a=0, count = 0;
for(int i=0; i<length; i++)
    if(str[i]==hello[a]){
        a++;
        count++;
    }

if(count==5)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

}
