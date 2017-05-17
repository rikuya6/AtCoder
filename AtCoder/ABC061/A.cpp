#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int a, b, c;
  cin >> a >> b >> c;
  if(c >= a && c <= b) cout << "Yes\n";
  else cout << "No\n";
}
