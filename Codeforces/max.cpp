#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()
    int t;
    cin >> t;

    while (t--) {
    
        int x[4], y[4];

        for (int i = 0; i < 4; ++i) {
            cin >> x[i] >> y[i];
        }

        sort(x, x + 4);
        sort(y, y + 4);

        int side_length = max(x[3] - x[0], y[3] - y[0]);
        int area = side_length * side_length;
        cout << area <<endl;
    }

    return 0;
}