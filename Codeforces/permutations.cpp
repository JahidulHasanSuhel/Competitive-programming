#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){
         optimize();
    int n; cin>>n;

    if(n == 1) cout<<1<<endl;

    else if(n ==2 || n == 3) cout<<"NO SOLUTION"<<endl;

    else{
        for(int i = 2; i<=n; i += 2) cout<<i<<endl;

        for(int i = 1; i<=n; i += 2) cout<<i<<endl;
    }
    return 0;
}