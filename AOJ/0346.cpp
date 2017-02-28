#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  int e[12];
  REP(i, 12)
    cin >> e[i];
  sort(e, e + 12);
  bool flag = true;
  for(int i = 0; i < 12; i += 4) {
    if(!(e[i] == e[i + 1] && e[i + 2] == e[i + 3]) && !(e[i] == e[i + 3] && e[i + 1] == e[i + 2])){
      // cout << i << endl;
      // cout << e[i] << " " << e[i + 1] << " " << e[i + 2] << " " << e[i + 3] << endl;
      // cout << e[i] << " " << e[i + 3] << " " << e[i + 1] << " " << e[i + 2] << endl;
      flag = false;
    }
  }

  if(flag)
    cout << "yes\n";
  else
    cout << "no\n";
  return 0;
}
