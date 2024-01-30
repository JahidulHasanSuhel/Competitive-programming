#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n, k, m, mesr = 0;
    string tmp, s, uttor;
    cin >> n >> k >> m >> tmp;

    for (char x : tmp) {
        if (k > static_cast<int>(x) - 'a') {
            s.pb(x);
        }
    }

    if (s.empty()) {
        cout << "NO\n";
        for (int i = 0; i < n; ++i) {
            cout << 'a';
        }
        cout << "\n";
        return;
    }

    map<char, int> mp;

    for (char x : s) {
        mp[x]++;
        if (mp.size() == k) {
            uttor.pb(x);
            ++mesr;
            mp.clear();
        }
    }

    if (mesr >= n) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";

    if (mp.empty()) {
        while (uttor.size() < n) {
            uttor.pb(s.back());
        }
        cout << uttor << "\n";
        return;
    }

    char g;

    for (char c = 'a'; c < static_cast<char>(97 + k); ++c) {
        if (mp[c] == 0) {
            g = c;
            break;
        }
    }

    while (uttor.size() < n) {
        uttor.pb(g);
    }

    cout << uttor << "\n";

}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}