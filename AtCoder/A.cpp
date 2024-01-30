#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    string s; cin >>s;
    bool ans = isupper(s[0]);
    for(int i = 1; i<s.length(); i++){
        if(islower(s[i]));
        ans &= islower(s[i ]);
    }
    if( ans ) cout << "Yes\n";
    else cout << "No\n";

    }

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}