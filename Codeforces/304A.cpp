#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 2e8+12;
bool isPerfectSquar[mx];
int main(){
         optimize();
    int n;cin>>n;

    for(int i = 1; i<=n; i++){
        isPerfectSquar[i*i]=1;
    }

    int cnt = 0;
    for(int a = 1; a<=n; a++){
        for(int b = a; b<=n; b++){
            int v = (a*a) + (b*b);
            if(isPerfectSquar[v]){
                cnt++;
            }
        }
    }
    cout<<cnt;

    return 0;
}