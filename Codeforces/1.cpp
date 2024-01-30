#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int t; cin >>t;
    while( t-- ){
        ll n, k, x;
        cin>>n>>k>>x;
        vector<ll> v(n);
        for(int i = 0; i<n; i++) cin >> v[i];

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        ll xsum = 0;
        for(int i=0; i<x; i++){
            xsum += v[i];
        }
        ll sum = 0, ans = 0, j =0, count =0;
        sum = accumulate(v.begin(), v.end(), sum) - xsum;

        ans = sum - xsum;
        for(int i=x; i<n; i++){
            sum-= v[i];
            xsum += v[i];
            xsum -= v[j++];
            count++;
            ans = max(ans, sum - xsum);
            if(count == k){
                break;
            }
        }

        ll index = count;
        if(count < k){
            for(int i = index; i<n; i++){
                xsum -= v[i];
                ans = max(ans, -xsum);
                count++;
                if(count == k) break;
            }
        }
        if(k == n) ans = max(ans, (long long int)0);
        cout<<ans<<endl;
    }

    return 0;
}