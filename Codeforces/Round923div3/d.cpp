#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pb push_back
#define dl double
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n, q; 
    cin >> n;
    vi a(n), x(n);
    for(auto &i : a){
        cin >> i;
    }
    x[n - 1] = n; 
    for(int i = n-2; i>=0; i--){
        x[i] = (a[i] == a[i+1] ? x[i + 1] : i + 1);
    }
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        --l; --r; 
        if(x[l] > r){
            cout << -1 << sp << -1 << endl;
        }
        else cout << l + 1 << sp << 1 + x[l] << endl;
    }
}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}