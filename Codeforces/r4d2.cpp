#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    
    int n; 
    cin>>n;
    map<string, int> cnt;

    while(n--){
        string s; 
        cin>>s;

        if(cnt[s]== 0 ) cout<<"OK\n";
        else cout<< s << cnt[s] <<endl;

        cnt[s]++;
    }

    return 0;
}