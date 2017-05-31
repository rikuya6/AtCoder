#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
  int a, b, c;
  cin >> a >> b >> c;
  if(a + b == c) cout << "Yes" << endl;
  else if(a + c == b) cout << "Yes" << endl;
  else if(b + c == a) cout << "Yes" << endl;
  else cout << "No" << endl;
}
