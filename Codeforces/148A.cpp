#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb push_back
#define dl double
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int k, l, m, n, d;
    int cont = 0;
    
    cin >> k >> l >> m >> n >> d;
    cont = d;
    
    if(k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
    }
    else
    {
        for(int i = 1; i <= d; i++)
        {
            if((i%k != 0) && (i%l != 0) && (i%m != 0) && (i%n != 0))
                cont--;
        }
        cout << cont << endl;
    }
}

int main(){
Suhel()
int t = 1;
// cin >> t;
while (t--) solve ();
    return 0;
}