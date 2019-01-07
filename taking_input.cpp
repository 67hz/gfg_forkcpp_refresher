#include<iostream>
using namespace std;

void inputData();

int main() {
  int t;

  cin>>t;

  while(t--)
  {
    inputData();
  }
}

void inputData()
{

  int a;
  string b;

  cin >> a >> b;

  cout << a << " " << b << endl;
}
