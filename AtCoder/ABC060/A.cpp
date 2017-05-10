#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  string a, b, c;
  cin >> a >> b >> c;
  if(a[a.length() - 1] == b[0] && b[b.length() - 1] == c[0]) cout << "YES\n";
  else cout << "NO\n";
}
