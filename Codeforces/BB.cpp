#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    ll t;cin>>t;
    while(t--){
    ll c, qq, xx, yy;

    cin >> c >> qq >> xx >> yy;
    vector<ll> v(c);

    for (int i = 0; i < c; i++) {
        cin >> v[i];
    }

    ll prs = 0;
    ll small;

    for (int i = 0; i < c; i++) {
        small = min(yy, abs(v[i] - prs) * xx);
        qq -= small;
        prs = v[i];
    }

    if (qq > 0) cout << "YES\n";
    else cout << "NO\n";
    }
    return 0;
}
