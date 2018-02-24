#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n;
int f[100][10], p[100][11];

string solve(const char ca, const char cb, const char cc, const char cd)
{
  int a = ca - '0';
  int b = cb - '0';
  int c = cc - '0';
  int d = cd - '0';
  string e7 = "=7";
  string plus = "+";
  string minus = "-";
  if      (a + b + c + d == 7) return ca + plus + cb + plus + cc + plus + cd + e7;
  else if (a - b - c - d == 7) return ca + minus + cb + minus + cc + minus + cd + e7;
  else if (a + b + c - d == 7) return ca + plus + cb + plus + cc + minus + cd + e7;
  else if (a + b - c + d == 7) return ca + plus + cb + minus + cc + plus + cd + e7;
  else if (a + b - c - d == 7) return ca + plus + cb + minus + cc + minus + cd + e7;
  else if (a - b + c + d == 7) return ca + minus + cb + plus + cc + plus + cd + e7;
  else if (a - b - c + d == 7) return ca + minus + cb + minus + cc + plus + cd + e7;
  else if (a - b + c - d == 7) return ca + minus + cb + plus + cc + minus + cd + e7;
}

int main()
{
  char ca, cb, cc, cd;
  cin >> ca >> cb >> cc >> cd;
  cout << solve(ca, cb, cc, cd) << endl;
}
