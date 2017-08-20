#include <iostream>
#include <algorithm>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  cin >> n;
  int t[] = {1, 2, 4, 8, 16, 32, 64, 128}, i = 0;
  while (true) {
    if (n < t[i]) break;
    i++;
  }
  cout << t[i - 1] << endl;
  return 0;
}
