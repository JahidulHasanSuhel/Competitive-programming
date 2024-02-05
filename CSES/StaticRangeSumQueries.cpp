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

const int mx = 2e5 + 123;
int arr[mx];
ll presum[mx];

void solve(){
    int n, q;
    cin >> n >> q;
 
    for(int i = 1; i <= n; i++) cin >> arr[i];
 
    for(int i = 1; i <= n; i++){
        presum[i] = presum[i - 1] + arr[i];
    }
 
    while(q--){
        int l, r;
        cin >> l >> r;
 
        cout << (presum[r] - presum[l - 1]) << endl;
    }
}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}