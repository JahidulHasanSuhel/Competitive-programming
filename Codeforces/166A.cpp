#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);

    for(int i = 0; i<n; i++){
        cin >> v[i].first >> v[i].second;
        v[i].first *= -1;
    }

    sort ( v.begin(), v.end() );
    int ans = 0;
    for(auto u: v){
        if(u == v[k-1]) ans++;
    }
    cout<< ans <<endl;


    return 0;
}