#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    auto cmp = [](pair<char, ll> const &a, pair<char, ll> const &b){
        return b.second <= a.second;
    };

    string s;
    getline(cin, s);

    map<char, ll> mp;
    ll count = 0;
    
    for(ll i = 0; i < s.length(); i++) 
        if(isalpha(s[i])) 
            count++, mp[toupper(s[i])] += 1;

    set<pair<char, ll>, decltype(cmp)> v(cmp);
    for(auto it: mp) v.insert(make_pair(it.first, it.second));

    for(int i = 0; i < 5; i++){
        pair<char, ll> temp = *v.begin();
        v.erase(v.begin());

        printf("%c: %.1lf%%\n", temp.first, (double)temp.second / count * 100);
    }
}
