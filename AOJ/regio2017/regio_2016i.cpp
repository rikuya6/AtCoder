// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?lang=jp&id=0297

#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int k, p;
    cin >> k >> p;
    if(k % p == 0) cout << p << endl;
    else cout << k % p << endl;
  }
}
