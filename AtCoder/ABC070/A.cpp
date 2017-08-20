#include <iostream>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n, work1, work2;
  cin >> n;
  work1 = (n % 10) * 100;
  work2 = n % 100;
  if (n - work1 - work2 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}
