#include <iostream>
using namespace std;
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)

bool is_prime(int n)
{
  if (n == 1) return false;
  for (int i = 2; i < n; ++i) {
    if (n % i == 0)
      return false;
  }
  return true;
}

void solve(int primes[], int n)
{
  for (int i = 3, pos = 0; i <= 55555; ++i) {
    // cout << is_prime(i) << endl;
    if (is_prime(i) && i % 5 == 1) {
      primes[pos] = i;
      ++pos;
      if (pos == n)
        break;
    }
  }
}

int main()
{
  int n;
  cin >> n;
  int primes[55];
  solve(primes, n);
  REP(i, n - 1)
    cout << primes[i] << " ";
  cout << primes[n - 1] << endl;
}
