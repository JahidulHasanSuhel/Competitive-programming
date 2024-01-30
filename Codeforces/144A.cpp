#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int n, a; cin >> n >> a;
    int minA(a), maxA(a), mini(0), maxi(0);
    for(int i= 1; i<n; ++i){
        cin >> a;
        if( a > maxA){
            maxA = a;
            maxi = i;
        }
        if( a <= minA){
            minA = a;
            mini = i;
        }
    }
    cout<< maxi + (n - 1 - mini) - (mini < maxi ? 1 : 0) << endl;

    return 0;
}