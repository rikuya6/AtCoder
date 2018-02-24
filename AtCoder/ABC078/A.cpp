#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string a, b;
  cin >> a >> b;
  if (a > b) cout << ">" << endl;
  else if (a < b) cout << "<" << endl;
  else cout << "=" << endl;
}
