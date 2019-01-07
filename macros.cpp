#include<iostream>
#define MULTI(a,b) (a*b)
using namespace std;

void macros(int a, int b);

int main() {
  int t;
  cin>>t;
  while(t--){
    int a, b;
    cin>>a>>b;
    macros(a,b);
  }
  return 0;
}

void macros(int a, int b) {
  cout << MULTI(a,b) << endl;
}
