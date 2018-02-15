#include <iostream>
#include <string>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n, a, b;

int digit_sum(int t) {
  int sum = 0;
  while (t) {
    sum += t % 10;
    t /= 10;
  }
  return sum;
}

int solve()
{
  int sum = 0;
  do {
    int d = digit_sum(n);
    // cout << n << ";" << d << endl;
    if (d >= a && d <= b)
      sum += n;
  } while (n--);
  return sum;
}

int main()
{
  cin >> n >> a >> b;
  cout << solve() << endl;
}
