#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 2e5+123;
int arr[mx];
int sum[mx];

int main(){
    Suhel()
    int n, q;
    cin >> n >> q;

    for(int i=1; i<=n; i++) cin >> arr[i];
    for(int i=1; i<=n; i++) {
        sum[i] = sum[i-1] ^ arr[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;

        cout<< (sum[r]^ sum[l-1]) <<endl;
    }

    return 0;
}