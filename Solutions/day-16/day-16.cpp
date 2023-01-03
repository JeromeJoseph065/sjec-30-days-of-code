#include<bits/stdc++.h>
#define for(i, n) for(long long i = 0; i < n; i++)

using namespace std;

typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for(i, n){
        cin >> a[i];
    }

    ll maxSum = 0, l = 0, r = 0;
    while(r < m) maxSum += a[r], r++;

    ll rSum = maxSum;
    while(r < n) rSum = rSum - a[l++] + a[r++], maxSum = max(maxSum, rSum);

    cout << maxSum << endl; 
}
