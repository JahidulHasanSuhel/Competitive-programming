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
    int n;
	cin >> n;
	string s;
	cin >> s;
	string res = "";
	while (!s.empty()) {
		int x;
		if (s.back() == 'a' || s.back() == 'e') {x = 2;}
		else {x = 3;}
		
		while (x--) {
			res += s.back();
			s.pop_back();
		}
		res += '.';
	}
	res.pop_back();
	reverse(res.begin(), res.end());
	cout << res << '\n';

}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}