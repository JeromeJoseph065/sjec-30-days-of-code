#include<iostream>

using namespace std;

int main(){
  long long a, b; // range
  cin >> a >> b;
  while(a <= b){
    if(!(a % 3)) cout << "Foo" << endl;
    else if(a&1) cout << "Baz" << endl;
    else cout << "Bar" << endl;
    a++;
  }
  
  return 0;
}
