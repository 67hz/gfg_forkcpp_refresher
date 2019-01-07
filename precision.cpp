#include <iostream>
#include <iomanip>
using namespace std;

void precise(float, float);

int main () {
  int t;
  cin>>t;
  while(t--)
  {
    float a, b;
    cin>>a>>b;
    precise(a, b);
  }

}

void precise(float a, float b)
{
  float result = a / b;

  cout << setprecision(3) << fixed << result << endl;

}
