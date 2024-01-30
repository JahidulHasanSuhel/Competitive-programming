#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int t; cin >> t;
    while (t--){
        int a, b, c;
        cin >> a >> b >> c;

        if( a+b+c - min({a, b, c}) >= 10) cout<<"YES\n";
        else cout << "NO\n";
    }

    return 0;
}