#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    string s1, s2;
    cin>>s1 >>s2;

    for(int i = 0; i<s1.size(); i++) s1[i] = tolower(s1[i]);
    for(int i = 0; i<s2.size(); i++) s2[i] = tolower(s2[i]);

    if( s1 < s2 ) cout<<"-1";
    else if( s2 < s1 ) cout<<"1";
    else cout<<"0";
    return 0;
}