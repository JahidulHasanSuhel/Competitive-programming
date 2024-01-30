#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()

    string s, s2;
    cin>>s;
    for(int i= 0; i<s.length(); i++){
        if(s[i]=='.') s2+='0';
        if(s[i] == '-' && s[i+1] == '.') s2 += '1',++i;
        if(s[i] == '-' && s[i+1] =='-') s2 += '2',++i;
    }
    cout<<s2;
 
    return 0;
}