#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vl vector<ll>
#define pb push_back
#define dl double
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    string s; cin >> s;
    int flag = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 33 && s[i]<= 126){
            if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
            flag =1;
        }
    }
    if(flag) yes;
    else no; 
}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}