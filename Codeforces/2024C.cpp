#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int t;
    cin>>t;

    while(t--){
        int n, x; 
        cin>> n >> x;

        vector<int> v(n);
        for(int i = 0; i<n; i++) cin>>v[i];
        sort(v.begin(), v.end());
        int size = unique ( v.begin(), v.end()) - v.begin();
        if( size == x) cout<<"Good"<<endl;
        else if( size <= x) cout<<"Bad" <<endl;
        else cout<<"Average" <<endl;
    }
    return 0;
}