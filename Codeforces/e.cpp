#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pb push_back
#define dl double
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n, k;
    cin >> n >> k;
    vi v(n);
    vi arr(k);
    arr[0] = n;
    arr[1] = 1;
    for(int i = 0; i<k; i++){
        int sign = ( i % 2 == 0 ? -1 : 1), move = 0, r = n+1, l = 0;
        for(int j = i ; j<n; j += k){
            v[j] = arr[i] + sign + move++;
            l = max(l, v[j]);
            r = min(r, v[j]);
        }
        if(sign == -1){
            if(i + 2 < k){
                arr[i + 2] = r - 1;
            } 
        }
        else {
            if(i + 2 < k) {
                arr[i + 2] = l + 1;
            }
        }
    }
    for(int &u : v){
        cout << u << sp;
    }
    cout << endl;
}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}