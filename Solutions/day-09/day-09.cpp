#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ll n; cin >> n;
    string pattern = "#", whiteSpace = "";

    for(ll i = 0 ; i < n; i++){
        whiteSpace = "";
        for(ll j = 0;  j < n - i + 1 ; j++) whiteSpace += " ";
        
        cout << whiteSpace + pattern + whiteSpace << endl;
        pattern += " #";
    }
    whiteSpace += " ";
    for(ll i = 1; i < n; i++){
        pattern = "#";
        for(ll j = 0;  j < n - i - 1 ; j++) pattern += " #";

        cout << whiteSpace + pattern + whiteSpace << endl;
        whiteSpace += " ";
    }
}
