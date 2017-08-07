#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int main()
{
  int n;
  while(cin >> n, n) {
    int sum[200000]; // 累積和
    sum[0] = 0;
    int a;
    for(int i = 0; i < n; i++) {
      cin >> a;
      sum[i + 1] = sum[i] + a;
    }
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
      for(int k = 1; k < n + 1; k++)
        max = std::max(max, sum[k] - sum[i]);
    }
    cout << max << endl;
  }
}
