#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n, k; cin >> n >> k;
    char c;
    string s, answer;
    for( int i = 0; i<k; i++){
        c = ('a' + i);
        s += c;
    }
    for( int i = 0; i<n; i++){
        answer +=  s; 
    }
    cout << answer << endl;
}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}