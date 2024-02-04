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
const int N = 100;
void solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> b(n, 1);
  vector<vector<int>> inds(N + 1);
  for (int i = 0; i < n; i++) {
    inds[a[i]].push_back(i);
  }
  int k = 2;
  for (int x = 1; x <= N; x++) {
    if ((int) inds[x].size() >= 2) {
      b[inds[x][0]] = k;
      k++;
      if (k > 3) {
        break;
      }
    }
  }
  if (k <= 3) {
    cout << "-1\n";
  } else {
    for (int i = 0; i < n; i++) {
      cout << b[i] << ' ';
    }
    cout << '\n';
  }

}

int main(){
Suhel()
int t = 1;
cin >> t;
while (t--) solve ();
    return 0;
}