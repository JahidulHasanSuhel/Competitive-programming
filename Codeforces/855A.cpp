#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){

    map<string, bool> vis;
    int n; cin >> n;

    while(n--){
        string s; cin >> s;

        if(vis[s] == 1) cout<<"YES\n";
        else cout<<"NO" <<endl;

        vis[s] =1;

    }

}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}