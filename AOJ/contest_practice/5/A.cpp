// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1141&lang=jp

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define INF (1 << 29)

int MAX = 1000000;
int MAX_sqrt = sqrt(MAX);
int prime[1000001];

void era()
{
  for(int i = 0; i < MAX; i++)
    prime[i] = 1;
  prime[0] = 0;
  prime[1] = 0;

  for(int i = 2; i < MAX_sqrt; i++) {
    if (prime[i] == 1)
      for (int j = 2; i * j <= MAX; j++)
        prime[i * j] = 0;
  }
}

int main()
{
  era();
  int a, d, n;
  while(cin >> a >> d >> n, a) {
    vector<int> is_prime;
    while(is_prime.size() != n) {
      if(prime[a])
        is_prime.push_back(a);
      a += d;
    }
    cout << is_prime[n - 1] << endl;
  }
  return 0;
}
