#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a, b, sizeof(a))

int main(){
    Suhel()

    int n;
    cin >> n;
    int arr[n+2];
    int sum=0,s2=0;

    for(int i=0;i<n;i++)
        cin >> arr[i] , sum += arr[i];
        
    int x = ceil(sum/2);

    for(int i=0;i<n;i++)
    {
        s2 += arr[i];
        if(s2 >= x)
        {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}