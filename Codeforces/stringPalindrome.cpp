#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))



int main(){
    Suhel()

    string s = "deacvAA";
    s.erase(s.begin() + 3 );
    cout<<s;

    // how to get input a line from user in string;
    // int t;
    // cin>>t;

    // for(int i = 0; i<t; i++){
    //     string s;
    //     char c;
    //     cin>>c;

    //     getline(cin, s);

    //     s = c + s;

    //     cout<<"Case " << i <<" "<< s <<endl;
    // }




    // string s1 = "madam";
    // string tmp = s1;
    // reverse(tmp.begin(), tmp.end());
    // if(tmp == s1) cout<<"palindrome";
    // else cout<<"not palindrome";

    return 0;
}