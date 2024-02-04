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
    int c = 0;
    int m = 0;
    for(int i = 0; i<n; i++){
        int a, b;
        cin >> a >> b;
        m -= a;
        m += b;
        c= max(c, m);
    }
    cout << c << endl;
}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}