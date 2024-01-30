#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int n; cin >> n;
    for( int x = 0; x<=n; x++ ){
        for( int y =0; x+y<=n; y++){
            for(int z =0; x+y+z<=n; z++){
                cout<< x << sp << y << sp << z <<endl;
            }
        }
    }

    return 0;
}