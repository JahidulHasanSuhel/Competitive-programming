#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int a, b, c; cin >> a >> b >> c;
    if(a == b){
        if(c % 2) cout<<"First" << endl;
        else cout <<"Second" << endl;
    }
    else {
        if(a > b) cout << "First " << endl;
        else cout << "Second" << endl;
    }
}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}