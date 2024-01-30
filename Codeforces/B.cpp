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
        ll a, b, c;
        cin>>a>>b>>c;
        vector<ll> v(a);
        for(int i = 0; i<a; i++) cin >> v[i];

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());

        ll csumm = 0;
        for(int i=0; i<c; i++){
            csumm += v[i];
        }
        ll sum = 0, answer = 0, j = 0, cnt = 0;
        sum = accumulate(v.begin(), v.end(), sum) - csumm;

        answer = sum - csumm;
        for(int i=c; i<a; i++){
            sum-= v[i];
            csumm += v[i];
            csumm -= v[j++];
            cnt++;
            answer = max(answer, sum - csumm);
            if(cnt == b){
                break;
            }
        }

        ll index = cnt;
        if(cnt < b){
            for(int i = index; i<a; i++){
                csumm -= v[i];
                answer = max(answer, -csumm);
                cnt++;
                if(cnt == b) break;
            }
        }
        if(b == a) answer = max(answer, (long long int)0);
        cout<<answer<<endl;
    }

    return 0;
}