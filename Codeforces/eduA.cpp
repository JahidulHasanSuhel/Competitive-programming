#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll fthree(ll n){
    return (n * (n - 1) * (n -2)) / 6;
}
ll ftwo(ll n){
    return (n*(n -1)) / 2;
}

void shomadhan(){
    ll n; cin >> n;

    vector<int> v(n + 1, 0);

    for(ll i =0; i<n; i++){
        ll x;
        cin>> x;
        v[x]++;
    }
    ll res =0;
    ll prevv =0;
    for(ll i =0; i<= n; i++){
        if(v[i] >= 3){
            res += fthree(v[i]);
        }
        if(v[i] >= 2){
            res += ftwo(v[i]) * prevv;
        }
        prevv += v[i];
    }
    cout<<res << endl;
}



int main(){
    Suhel()

    ll t; cin >> t;
    while(t--){
        shomadhan();
    }

    return 0;
}