#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    
    set<int> s;

    int n; 
    cin >> n;

    int p;

    cin >> p;
    for(int i = 0; i<p; i++){
        int a; cin >> a;
        s.insert(a);
    }

    cin >> p;
    for(int i = 0; i<p; i++){
        int a; cin >> a;
        s.insert(a);
    }

    if(s.size() == n) cout <<"I become the guy.\n";
    else cout << "Oh, my keyboard!\n";

}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}