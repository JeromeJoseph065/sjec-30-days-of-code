#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

map<ll, ll> dp;

ll collatz(ll num){
    if(num == 1) return 0;
    else if(dp[num] != 0) return dp[num];
    else if(num & 1) dp[num] = 1 + collatz(3 * num + 1);
    else dp[num] = 1 + collatz(num / 2);

    return dp[num];
}

int main(){
    ll a, b, longest = 0, val = 1;
    cin >> a >> b;
    for(; a <= b; a++){
        if(collatz(a) > longest){
            longest = dp[a];
            val = a;
        }
    }
    cout << val << endl;
}
