#include<iostream>
using namespace std;

void bitWiseOperation(int, int, int);

int main () {
  int t;
  cin >> t;

  while(t--){
    int a, b, c;
    cin >> a >> b >> c;
    bitWiseOperation(a, b, c);
  }
  return 0;
}

void bitWiseOperation(int a, int b, int c) {
  int d = a ^ a;
  int e = c ^ b;
  int f = a & b;
  int g = c | (a ^ a);
  
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;
  cout << g << endl;
  cout << ~e << endl;

}
