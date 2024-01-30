#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    
    int t; cin >> t;
    while(t--){

        int n; cin >> n;
        if( n == 1) cout << 1 <<endl;
        else if (n % 2) cout<< -1 <<endl;
        else{
            int a[n];
            iota(a, a+n, 1);
            for( int i =0; i<n; i+= 2){
                swap(a[i], a[i+1]);
            }
            for(auto it: a) cout<< it <<' ';
        }
        cout<<endl;
    }

    return 0;
}