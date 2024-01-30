#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int n, m;
    cin>>n>>m;

    map<string, string> ipName;

    for(int i = 0; i<n; i++){
        string name, ip;
        cin>>name >>ip;

        ipName[ip] = name;
    }

    while(m--){
        string s1, ip;
        cin>>s1>> ip;

        ip.pop_back();
        cout<< s1 <<" " << ip <<"; #" <<ipName[ip]<<endl;
    }

    return 0;
}