#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  for(int i = 0; i < 100; i++) {
    if(a * i % b == c) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
}
