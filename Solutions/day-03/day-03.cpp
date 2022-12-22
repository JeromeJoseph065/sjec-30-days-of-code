#include <iostream>

using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    ll a[n], sum=0;
    double avg;
    for(ll i=0;i<n;i++) cin>>a[i], sum+=a[i];
    avg=(double)sum/n;
    for(ll i=0;i<n;i++) if(a[i]>avg) cout << a[i] << " ";

    return 0;
}
