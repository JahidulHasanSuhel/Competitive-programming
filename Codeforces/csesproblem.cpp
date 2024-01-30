#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 2e5+123;
int arr[mx];
ll sum[mx];

int main(){
    Suhel()
    int n, x; 
    cin >> n >> x;

    for(int i = 1; i<=n; i++) cin >> arr[i];

    for(int i = 1; i<=n; i++) sum[i] = sum[i -1] + arr[i];

    ll ans = 0;
    map<ll, int> cnt;
    cnt[0] = 1;

    for(int i=1; i<=n; i++){
        ll sumMinus = sum[i] - x;
        ans += cnt[sumMinus];
        cnt[sum[i]]++;
    }
    cout<< ans << endl;

    return 0;
}