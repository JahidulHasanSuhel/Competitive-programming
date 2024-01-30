#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define dl double
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    ll a, b, r; 
    cin >> a >> b >> r;
    if(a == b){
        cout << 0 << endl;
        continue;
    }
    ll mnum = max(a, b);
    ll minnum = min (a, b);
    ll pos = -1;
    for(int j = 63; j>= 0; j--){
        ll d1 = (mnum >> j) &1;
        ll d2 = (minnum >> j)&1;
        if(d1 != d2){
            pos = j; 
            break;
        }
    }
    pos --;
    while(pos >= 0){
        ll d1 = (mnum >> pos) &1;
        ll d2 = (minnum >> pos)&1;
        if(d1==1 && d2 == 0 && (ll)pow(2,pos)<=r){
            mnum = mnum - pow(2, pos);
            minnum = minnum + pow(2, pos);
        }
        pos--;
    }
    ll ans = mnum - minnum;
    cout << ans <<endl;





}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}