#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
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
    int n,m,q,r,k;
    int x = 0;
    cin >> n >> m >> k;
    q = r = k/2;
    vi va(k), sb(k), a(n), b(m);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] <= k) va[a[i]-1]++;
    }
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        if(b[i] <= k) sb[b[i]-1]++;
    }

    for(int i = 0; i < k; i++)
    {
        if(sb[i] && !va[i] && r)
        {
            r--;
        }
        else if(!sb[i] && va[i] && q)
        {
            q--;
        }
        else if(sb[i] && va[i])
        {
            x++;
        }
    }
    if(q+r-x == 0) yes;
    else no;
}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}