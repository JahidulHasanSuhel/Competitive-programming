#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int t; cin >> t;
    while( t-- ){
        int n; cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        bool ok = false;
        for(int i = 0; i<n; i++){
            if(c[i] != a[i] && c[i] != b[i])
            ok = true;
        }
        if(ok) cout<< "YES" <<endl;
        else cout<< "NO" <<endl;
    }
    return 0;
}