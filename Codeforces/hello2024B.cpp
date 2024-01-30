#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int t , n; 
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;

        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += s[i] == '+' ? 1 : -1;
        }
        cout<<abs(sum) <<endl;
    }

    return 0;
}