#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define sp " " 
#define endl "\n"
#define Suhel() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    Suhel()

    int t;
    cin >> t; // Number of test cases

    while (t--) {
        // Input for each test case
        int a, b, c;
        cin >> a >> b >> c;

        // Finding the medium number
        int arr[] = {a, b, c};
        sort(arr, arr + 3);

        cout << arr[1] << endl; // Output the medium number
    }
	
    return 0;
}