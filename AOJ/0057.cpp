#include <iostream>
using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

int data[100001];

void calc()
{
  data[0] = 1;
  for(int i = 1; i < 100001; ++i) {
    data[i] = data[i-1] + i;
  }
}

int main()
{
  int n;
  calc();
  while (cin >> n) {
    cout << data[n] << endl;
  }
  return 0;
}
