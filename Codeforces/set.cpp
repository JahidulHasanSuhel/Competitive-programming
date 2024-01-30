#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

set<int> s;

void solve(){


    int typ, x;
    cin >> typ >> x;

    if(typ == 1) s.insert(x);
    else if(typ == 2) s.erase(x);
    else{
        if(s.count(x) == 1) cout << "Yes\n";
        else cout << "No\n";
    }

}

int main(){
Suhel()

int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}