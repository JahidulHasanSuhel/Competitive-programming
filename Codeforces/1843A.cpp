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
    int n; 
    cin >> n;
    vi v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    srt(v);
    int ans = 0;   
    for(int i = 0; i<n/2; i++){
        ans += v[n-i-1] - v[i];
    }
    cout << ans << endl;

}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}