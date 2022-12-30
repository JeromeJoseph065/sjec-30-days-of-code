#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

bool isPrime(ll num){
    if(num < 2) return false; // 0 and 1 arent primes
    else if(num == 2) return true;
    else if(!(num & 1)) return false;

    else{
        for(ll d = 3; d*d <= num; d += 2){
            if(num % d == 0)
                return false;
        }
    }
    return true;
}

int main(){
    ll m , n; cin >> m >> n;
    while(!isPrime(m) && m <= n) m++;

    ll lastPrime = m;
    for(ll i = lastPrime + 1; i <= n; i++){
        if(isPrime(i)){
            printf("%lld - %lld : %lld\n", lastPrime, i, i - lastPrime - 1);
            lastPrime = i;
        }
    }

    return 0;
}
