#include<iostream>

using namespace std;
typedef long long ll;

int main(){
  long long n, m;
  cin >> n >> m;
  if(!(n%3%2) && !(m%2)||!(m%3%2)&&!(n%2)) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
