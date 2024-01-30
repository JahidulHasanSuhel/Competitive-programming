#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()
    
    string s;
    cin>>s;

    int up = 0, low = 0;
    for(int i = 0; i<s.size(); i++){
        if(isupper(s[i])) up++;
        else low++;
    }
    if(up>low){
     char ch;
     for(int i = 0; i<s.size(); i++){
     ch = toupper(s[i]);
     cout<<ch;
      }
    }
    else{
     char ch;
     for(int i = 0; i<s.size(); i++) {
        ch = towlower(s[i]);
        cout<<ch;
     }
    }

    return 0;
}