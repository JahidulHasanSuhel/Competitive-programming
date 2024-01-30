#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    ll n; cin >> n;
    ll x1 = 0, y1 = 0;
    while(n--){
        ll x=0, y=0;
        cin >> x >> y;

        x1 += x;
        y1 += y;
    }
    if(x1 > y1) {
        cout <<"Takahashi"<<endl;
    }
    if( x1 < y1) {
        cout <<"Aoki"<<endl;
    }
    if(x1 == y1) {
        cout <<"Draw"<<endl;
    }
}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}