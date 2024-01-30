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
    int x[n];
    set<int> a;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a.find(x[i]) != a.end())
        {
            cout << "NO" << endl;
            return;
        }
        a.insert(x[i]);
    }
    cout << "YES" << endl;

}
  
int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}