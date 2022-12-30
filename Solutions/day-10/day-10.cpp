#include<bits/stdc++.h>

using namespace std;

typedef long long ll;


ll fact(ll n){
    if(n <= 1) return 1;
    return fact(n-1) * n;
}

ll nCr(ll n, ll r){
    ll ans = 1;
    for(ll i = 0; i < r; i++) ans *= (n - i);
    return ans / fact(r); 
}

int main(){
    ll n; cin >> n;
    cout << nCr(n-6, 4)<< endl;
}
