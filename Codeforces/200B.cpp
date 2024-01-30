#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n; 
    cin >> n;
    int arr[123];
    double sum = 0.0, ans = 0.0;
    for(int i =0; i<n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    ans = sum/n;
    cout << fixed << setprecision(12) << ans <<endl;

}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}