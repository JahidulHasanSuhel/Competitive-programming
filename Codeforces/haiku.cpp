#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))

bool isVowel( char c ){
    return (c =='a'||c =='e'||c =='i'||c =='o'||c =='u');
}

int main(){
    Suhel()
    vector<string> v;
    int cnt[] = {5, 7, 5};

    for(int i = 0; i<3; i++){
        string s;
        char c;
        cin>>c;
        getline(cin, s);
        s = c + s;
        v.push_back(s);
    }
    for(int i = 0; i<3; i++){
        int c = 0;
        for(auto u: v[i]){
            if(isVowel(u)) c++;
        }
        if(c != cnt[i]) return cout<<"NO\n", 0;
    }
    cout<<"YES\n";
    
    return 0;
}