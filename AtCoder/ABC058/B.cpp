#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  string o, e;
  cin >> o >> e;
  REP(i, e.length())
    cout << o[i] << e[i];
  if(o.length() - e.length() == 1) cout << o.back();
  cout << endl;
}
