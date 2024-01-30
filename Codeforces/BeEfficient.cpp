#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 2e5 + 123;
int arr[mx];
ll sum[mx];

int main(){
    Suhel()
    int t; cin >> t;
    for(int tc = 1; tc <= t; tc++){
        int n, m;
        cin >> n >> m;

        for(int i = 1; i<=n; i++) cin >> arr[i];

        for(int i = 1; i<=n; i++) sum[i] = sum[i-1] + arr[i];

        for(int i = 1; i<=n; i++) sum[i] %= m;

        map<int, int> cnt;
        ll ans =0;
        cnt[0]++;

        for(int i=1; i<=n; i++){
            ans += cnt[sum[i]];
            cnt[sum[i]]++;
        }

        cout <<"Case " << tc << ": " << ans << endl;

    }

    return 0;
}