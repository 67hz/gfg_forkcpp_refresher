#include<iostream>
using namespace std;

void getLineAndIgnore();

int main() {
  int t;
  cin >> t;
  cin.ignore(); //ignore newline so it isn't consumed by getline()
  while(t--){
    getLineAndIgnore();
  }

  return 0;
}


void getLineAndIgnore() {
  string a, d;
  int b;

  getline(cin, a);
  cin >> b;

  cin.ignore();
  getline(cin, d);

  cout << a << endl;
  cout << b << endl;
  cout << d << endl;

}
