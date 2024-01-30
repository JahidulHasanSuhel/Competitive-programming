#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int t; cin>>t;
    t *= 3;
    while(t--){
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        if(s[0] == '?'){
            if(s[1] == 'A' && s[2]=='C') cout<<'B' <<endl;
            else if(s[1] == 'A' && s[2]=='B') cout<<'C' <<endl;
            else cout<<'A' <<endl;

        }

    }

    return 0;
}