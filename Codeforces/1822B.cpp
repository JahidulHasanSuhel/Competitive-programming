#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


void solve(){
    ll n; cin >> n;

    ll arr[n];

    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout<< max(arr[0] * arr[1], arr[n-2] * arr[n-1]) << endl;

}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}