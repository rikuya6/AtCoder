// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516

#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main()
{
  int n, k;
  while(cin >> n >> k, n && k) {
    int sum[200000]; // 累積和
    sum[0] = 0;
    int a;
    for(int i = 0; i < n; i++) {
      cin >> a;
      sum[i + 1] = sum[i] + a;
    }
    int max = INT_MIN;
    for(int i = k; i < n + 1; i++){
      max = std::max(max, sum[i] - sum[i - k]);
    }
    cout << max << endl;
  }
}
