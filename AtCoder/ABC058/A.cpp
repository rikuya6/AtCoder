#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if(b - a == c - b) cout << "YES\n";
  else cout << "NO\n";
}
