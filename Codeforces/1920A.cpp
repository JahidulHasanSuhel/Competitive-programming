#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
   int t;
    cin >> t;
    while (t--) {
        ll a = 0;
        ll xx = LLONG_MAX;
        int n;
        cin >> n;

        set<ll> s1;
        while (n--) {
            int k;
            cin >> k;
            ll v;
            cin >> v;
            if (k == 1) a = max(a, v);
            else if (k == 2) xx = min(xx, v);
            else s1.insert(v);
        }
        ll ResCnt = xx - a + 1;
        for (auto i : s1) {
            if (i >= a && i <= xx) ResCnt--;
        }
        if (ResCnt < 0) ResCnt = 0;
        cout << ResCnt << endl;
    }
    return 0;
}