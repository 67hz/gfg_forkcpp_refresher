#include<iostream>
using namespace std;

void evenOdd(int, int);
bool isEven(int);

int main() {
  int t;
  cin>>t;
  while(t--){
    int a, b;
    cin>>a>>b;
    evenOdd(a, b);
  }
  return 0;
}

void evenOdd(int a, int b) {
  if (isEven(a)) {
    cout << a << endl;
    cout << b << endl;
  }
  else {
    cout << b << endl;
    cout << a << endl;
  }
}

bool isEven(int a) {
  return (a % 2 == 0);
}
