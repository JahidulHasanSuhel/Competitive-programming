#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int y; cin>>y;
    while(true){
        y += 1;
 
        int a = y / 1000 ;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if( a != b && a != c && a != d && b != c && b != d && c != d) break;
    }
    cout<<y <<endl;

    return 0;
}