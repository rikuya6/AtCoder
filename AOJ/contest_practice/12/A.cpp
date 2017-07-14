#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  int n;
  while(cin >> n, n) {
    int a[n];
    REP(i, n) cin >> a[i];
    vector<int> combination;
    REP(i, n) {
      for(int k = 0; k < n; k++) {
        if(i == k) continue;
        combination.push_back(abs(a[i] - a[k]));
      }
    }
    sort(combination.begin(), combination.end());
    cout << combination[0] << endl;
  }
}
