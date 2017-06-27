#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int x, a, b;
  cin >> x >> a >> b;
  if(a >= b) {
    cout << "delicious" << endl;
  }else if(x >= b - a){
    cout << "safe" << endl;
  }else{
    cout << "dangerous" << endl;
  }
  return 0;
}
