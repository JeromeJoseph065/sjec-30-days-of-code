#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    string ans = "";
    char prev = '_', _temp;
  
    for(ll i = 0; i < n; i++) {
        cin >> _temp;
        
        if(_temp != prev)
            prev = _temp, ans = ans + _temp + " ";

    }
    cout << ans << endl;
    return 0;
}
