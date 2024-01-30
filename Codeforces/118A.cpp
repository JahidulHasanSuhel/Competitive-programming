#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))

bool isVowel( char c ){
    return (c =='a'||c =='e'||c =='i'||c =='o'||c =='u'||c =='y');
}

int main(){
    Suhel()
    
    string s, ans;
    cin>>s;

    for(auto u: s){
        char c = tolower( u );

        if( isVowel(c) == 0 ){
            ans += '.';
            ans += c;
        }
    }
    cout<< ans <<endl;

    return 0;
}