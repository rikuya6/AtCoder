#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int values[3];
  REP(i, 3) cin >> values[i];
  sort(values, values + 3);
  cout << values[0] + values[1] << endl;
  return 0;
}
