#include<bits/stdc++.h>
using namespace std;

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

const int mx = 2e5+123;
int arr[mx];
ll sum[mx];
 
void solve(){
    int n, x; 
    cin >> n >> x;
 
    for(int i = 1; i<=n; i++) cin >> arr[i];
 
    for(int i = 1; i<=n; i++) sum[i] = sum[i -1] + arr[i];
 
    ll ans = 0;
    map<ll, int> cnt;
    cnt[0] = 1;
 
    for(int i=1; i<=n; i++){
        ll sumMinus = sum[i] - x;
        ans += cnt[sumMinus];
        cnt[sum[i]]++;
    }
    cout<< ans << endl;
}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}