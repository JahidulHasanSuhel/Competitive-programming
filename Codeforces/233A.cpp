#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int n; cin >> n;
    if(n  % 2 == 1) cout << -1 <<endl;
    else {
        cout<< "2 1";
        for( int i = 3; i<n; i+=2){
        cout << sp << i + 1 << sp << i;
        }
        cout << endl;
    }
    return 0;
}