#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){

    set<int> s;

    int n; 
    cin >> n;

    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        s.insert(a);
    }
    if(s.size() == 1) cout << "NO\n";
    else{
        cout << *(++s.begin()) <<endl;
    }

}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}