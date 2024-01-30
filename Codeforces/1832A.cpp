#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    string s; cin >> s;
    s = s.substr(0, s.size()/2);
    int sz = unique(s.begin(), s.end()) - s.begin();

    if(sz == 1) cout << "NO\n"; 
    else cout << "YES\n";

}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}