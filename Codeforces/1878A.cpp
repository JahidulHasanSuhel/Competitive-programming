#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    bool yes = 0;
    for(int i = 0; i<n; i++){
       cin >> arr[i];
       if(arr[i] == k) yes = 1;
    } 
    if(yes) cout<<"YES\n";
    else cout<< "NO\n";
}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}