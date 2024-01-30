#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    string s1, s2;
    cin >> s1 >> s2;

    for(int i=0; i<s1.length(); ++i){
        if(s1[i] == s2[i]){
            s1[i] ='0';
        }
        else s1[i] = '1';

    }
    cout<< s1 <<endl;

    return 0;
}
