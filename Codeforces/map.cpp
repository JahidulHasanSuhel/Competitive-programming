#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    int t; cin>>t;
    string s = "abcdefgh";
    while(t--){
        string str; cin>>str;
        char ch = str[0];
        int n = str[1] - '0';
        for(int i = 0; i<8; i++){
            if(s[i] != ch) cout<< s[i] << n <<endl;
        }
        for(int i = 0; i<8; i++){
            if(n != i) cout<< ch << i <<endl;
        }
    }

    return 0;
}