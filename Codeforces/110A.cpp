#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    ll n; cin >> n;
    int count = 0;
while(n != 0){
    if(n % 10 == 4 || n % 10 == 7){
        count += 1;
    }
    n /= 10;
}
    if( count == 4 || count == 7) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}