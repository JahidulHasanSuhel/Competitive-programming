#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()

    int n, a, b, c, asum = 0, bsum = 0, csum = 0;

    cin>>n; 

    while(n--){
        cin>>a >>b >>c;

        asum += a;
        bsum += b;
        csum += c;

    }
        if( asum == 0 && bsum == 0 && csum == 0 ) cout<<"YES\n";
        else cout<<"NO\n";

    return 0;
}