#include<iostream>
using namespace std;

void logicOp(int, int);

int main() {
  int t;
  cin>>t;

  while(t--){
    int a, b;
    cin>>a>>b;
    logicOp(a,b);
  }
  return 0;
}

void logicOp(int a, int b) {
  cout << (a && b) << " " << (a || b) << " " << ((!a)&&(!b)) << endl;
}

