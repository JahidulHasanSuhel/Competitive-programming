#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int x;
    for(int i = 1; i<=5; ++i){
        for(int j = 1; j<=5; ++j){
            cin>>x;
            if(x == 1){
                cout<< abs(i - 3) + abs( j -3 ) <<endl;
            }
        }
    }
    return 0;
}