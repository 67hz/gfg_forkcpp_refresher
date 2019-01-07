#include<iostream>
using namespace std;

void isDivisibleByPrime(int);

int main() {
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;

    isDivisibleByPrime(n);
  }
  return 0;
}

void isDivisibleByPrime(int n) {
  if (n % 11 == 0) {
    cout << "Eleven";
  }
  else if (n % 3 == 0) {
    cout << "Three";
  }
  else if (n % 2 == 0) {
    cout << "Two";
  }
  else {
    cout << "-1";
  }
  cout << endl;
}
