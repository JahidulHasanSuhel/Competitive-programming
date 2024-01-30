#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    ll n, k; cin >> n >> k;
    if(n % 2 == 0 || n % k  == 0) cout << "YES\n";
    else if(n % 2 != 0 && k % 2 != 0 && n >= k) cout << "YES\n";
    else cout << "NO\n";

}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}