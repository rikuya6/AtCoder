#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int x;
int k;

string solve()
{
  string ans = to_string(x);
  int len = ans.length();
  if (len < k) {
    for (int i = 1; i < len; i++)
      ans[i] = '0';
    for (int i = 0; i < k - len + 1; i++) {
       ans += '0';
    }
  } else {
    int p = 1;
    REP(i, k)
      p *= 10;
    int mod = x % p;
    int ex = x - mod;
    ex += 1 * (p);
    ans = to_string(ex);
  }
  return ans;
}

int main()
{
  cin >> x >> k;
  cout << solve() << endl;
}
