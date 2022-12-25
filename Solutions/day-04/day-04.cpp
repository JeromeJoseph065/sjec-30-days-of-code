#include<iostream>

using namespace std;
typedef long long ll;

int main(){
  long long n, m;
  cin >> n >> m;
  if(!((m*n)%6) && n > 1 && m > 1) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}
