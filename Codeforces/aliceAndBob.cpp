#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int testCase; cin>>testCase;
    while (testCase--){
        int alice, bobb;
        cin >> alice >> bobb;

        if((alice + bobb) & 1) cout<< "Alice" <<endl;
        else cout << "Bob" <<endl;
    }
    return 0;
}