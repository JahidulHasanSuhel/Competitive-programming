#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int digitofsum = 0;

        for(auto u: s){
            digitofsum += (u - '0');
        }
        string str = to_string(digitofsum);

        string tmp = str;
        reverse(tmp.begin(), tmp.end());
        if( tmp == str) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}