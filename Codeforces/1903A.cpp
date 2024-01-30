#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        if( is_sorted(arr, arr+n) || k > 1) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}