#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define INF (1 << 29)

int MAX = 1000001;
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

int m(const int n, const int p)
{
  vector<int> primes;
  int prime_cnt = 0;
  for(int i = n + 1; prime_cnt < p; i++) {
    if(prime[i] == 1) {
      primes.push_back(i);
      prime_cnt++;
    }
  }
  vector<int> ans;
  for(int i = 0; i < p; i++) {
    for(int k = i; k < p; k++) {
      ans.push_back(primes[i] + primes[k]);
    }
  }
  sort(ans.begin(), ans.end());
  return ans[p - 1];
}

int main()
{
  era();
  int n, p;
  while(cin >> n >> p) {
    if(n == -1 && p == -1) break;
    cout << m(n, p) << endl;
  }
}
