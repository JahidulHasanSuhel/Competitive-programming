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

ll dp[100123];

ll fact(ll n){
    if(n == 0) return 1;
    if(dp[n] != 0) return dp[n];

    ll res = (n * fact(n - 1)) % MOD;
    dp[n] = res;
    return dp[n];
}

void solve(){
    ll n; cin >> n;
    cout << fact(n) <<endl;
}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}