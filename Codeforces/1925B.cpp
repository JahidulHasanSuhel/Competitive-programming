#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n, k; cin >> n >> k;
    int ans, x = 1;
    while( n - k * x >= -1){

        if(!((n-(k*x)) % x )){
            ans = x;
        }
        x++;
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