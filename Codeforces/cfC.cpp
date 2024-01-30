#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    ll t;
    cin >> t;
    while (t--) {
        ll as;
        cin >> as;
        ll arr[as];

        for (int i = 0; i < as; i++) {
            cin >> arr[i];
        }

        ll left[as], right[as];
        map<int, int> mp;
        mp[0] = 1;
        mp[as - 1] = -1;
        for (int i = 1; i < as - 1; i++) {
            

            ll ld = abs(arr[i] - arr[i - 1]);
            ll rd = abs(arr[i] - arr[i + 1]);

            if (ld < rd) {
                mp[i] = -1;
            } else {
                mp[i] = 1;
            }
        }

        left[0] = 0;

        for (int i = 1; i < as; i++) {
            if (mp[i] == -1) {
                left[i] = 1 + left[i - 1];
            } else {
                left[i] = left[i - 1] + abs(arr[i] - arr[i - 1]);
            }
        }

        right[as - 1] = 0;

        for (int i = as - 2; i >= 0; i--) {

            if (mp[i] == 1) {
                right[i] = 1 + right[i + 1];
            }
            else{
                right[i] = right[i + 1] + abs(arr[i] - arr[i + 1]);

            }
        }

        ll q;
        cin >> q;

        while (q--) {
            ll a, b;
            cin >> a >> b;

            if (a == b) {
                cout << 0 << endl;
            } else {
                if (b > a) {
                    cout << right[a - 1] - right[b - 1] << endl;
                } else {
                    cout << left[a - 1] - left[b - 1] << endl;
                }
            }
        }
    }

    return 0;
}