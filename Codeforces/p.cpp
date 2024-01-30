#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;

        for(int i = n - k; i<=n; i++) cout<< i <<" ";
        for(int i = n - k - 1; i>=1; i--)cout<< i <<" ";
        cout<<endl;
        
    }

    return 0;
}