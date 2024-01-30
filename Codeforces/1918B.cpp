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

    vi v(n+1), y(n+1);

    for (int i = 0; i < n + n; i++) {
        cin >> (i < n ? v[i] : y[v[i-n]]);
        }
        srt(v);
        for (auto u : v) {
        if (u == 0) {
        continue;
        }
        cout << u << sp;
        }
        cout << endl;

        for (auto u : y) {
        if (u == 0) {
        continue;
        }
        cout << u <<sp;
    }
    cout << endl;
}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}