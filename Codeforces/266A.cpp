#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string s; 
int n, cnt;

int main(){
    Suhel()

    cin >> n >> s; 

    for(int i = 0; i < n; i++){
        if(s[i] == s[i + 1]) cnt++;
    }

    cout << cnt << endl; 

    return 0;
}