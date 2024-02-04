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

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    bool vis[26] = {};
    int ans = 0;
    for(auto c: s){
        if(!vis[c - 'A']){
            ans += 2;
            vis[c - 'A'] = true;
        }
        else ans++;
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