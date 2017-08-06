// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0240

#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int VALUE = 10000;

int simple(int y, int r)
{
  return VALUE * (1.0 + (y * ((double)r / 100.0)));
}

int compound(int y, int r)
{
  return VALUE * pow(1.0 + ((double)r / 100.0), y);
}

int main()
{
  int n;
  while(cin >> n, n) {
    int y, b, r, t;
    cin >> y;
    vector<pair<int, int> > p;
    for(int i = 0; i < n; i++) {
      cin >> b >> r >> t;
      if(t == 1) p.push_back(make_pair(simple(y, r), b));
      else p.push_back(make_pair(compound(y, r), b));
    }
    sort(p.begin(), p.end(), greater<pair<int, int> >());
    // for(auto e : p) {
    //   cout << e.first << " ";
    // }
    // cout << endl;
    cout << p[0].second << endl;
  }
}
