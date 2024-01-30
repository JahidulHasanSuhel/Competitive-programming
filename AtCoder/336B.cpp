#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int n; cin >> n;
    int cnt = 0;
    while( n % 2 == 0){
        cnt++;
        n /= 2;
    }
    cout<< cnt << endl;

    return 0;
}