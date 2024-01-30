#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int t; cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;

        string s[n];
        int ans = n;

        for(int i = 0; i<n; i++){
            cin >> s[i];

            if(s[i] != s[0]){
                ans--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}