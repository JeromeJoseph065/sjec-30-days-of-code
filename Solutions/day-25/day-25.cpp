// Code to decrypt a cipher text based on a substitution cipher by using frequency analysis
// May decrypt a few words 
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    auto cmp = [](pair<char, ll> &a, pair<char, ll> &b){
        return a.second >= b.second;
    };
    
    map <char, ll> occ;
    map <char, char> mp;
    vector<pair<char, ll>> v;

    char freq_letters[] = {'e','t','a','o','i','n','s','h','r','d','l','c','u','m','w','f','g','y','p','b','v','k','j','x','v','q','z'};

    string secret; getline(cin, secret);
    
    for(auto i: secret){
        if(isalpha(i)){
            if( i & 32 ) occ[i] += 1;  
            else occ[i ^ 32] += 1;
        }
    }
    
    for(auto it: occ) v.push_back(make_pair(it.first, it.second));
    
    sort(v.begin(), v.end(), cmp);
    
    ll index = 0;
    for(auto i: v) mp[i.first] = freq_letters[index], index++;
    
    
    for(ll i = 0; i <  secret.length(); i++){
        
        char letter = secret[i];
        
        if (!(letter & 32)) letter ^= 32;
        
        if(mp.find(letter) != mp.end()) {
            
            letter = mp[letter];
            
            if(!(secret[i] & 32)) letter ^= 32;
            
            cout << letter ;
            
        } else {
            
            cout << secret[i];
        }
    }
    
    cout << endl;
    return 0;
}

// letter mapping obtained for sample input 
/*
occurence : 
  l : 26
  e : 25
  i : 20
  k : 19
  y : 19
  d : 17
  w : 16
  c : 15
  n : 12
  p : 11
  f : 9
  a : 8
  b : 8
  g : 7
  q : 6
  t : 5
  u : 5
  o : 5
  m : 4
  x : 4
  r : 3
  j : 2
  h : 2
  v : 2
mapping ->
  l -> e
  e -> t
  i -> a
  k -> o
  y -> i
  d -> n
  w -> s
  c -> h
  n -> r
  p -> d
  f -> l
  a -> c
  b -> u
  g -> m
  q -> w
  t -> f
  u -> g
  o -> y
  m -> p
  x -> b
  r -> v
  j -> k
  h -> j
  v -> x
*/
