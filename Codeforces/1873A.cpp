#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define sp " " 
#define endl "\n"
#define F first
#define S second

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define sqr(a) ((a) * (a))

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))


int main(){
    Suhel()

    string given = "abc";

    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        int cnt = 0;
        for(int i=0; i<3; i++){
            if(s[i] != given[i]) cnt++;
        }
        if(cnt <= 2 ) cout<< "YES\n";
        else cout<< "NO\n";
    }

    return 0;
}