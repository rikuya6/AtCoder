#include <iostream>
#include <queue>

using namespace std;
#define REP(i, j) for(int i = 0; i < j; i++)

int main()
{
  int n, m;
  while (cin >> n >> m, n || m) {
    queue<int> number;
    REP(i, n) number.push(i + 1);
    for (int i = 1; number.size() != 1; i++) {
      int front = number.front();
      number.pop();
      if (i % m != 0) number.push(front); // 除外する番号でなかったら、一番後ろへ
    }
    cout << number.front() << endl;
  }
}
