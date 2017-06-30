#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

void set_zero_number(int a, int number[6], const int l)
{
  int cnt = 0;
  int b = a;
  while(true) {
    int c = b / 10;
    b = c;
    if(c == 0) break;
    cnt++;
  }
  for(int i = 0; i < l; i++) {
    int pos = 1;
    for(int k = i + 1; k < l; k++) pos *= 10;
    if(cnt > 0){
      number[i] = 0;
      cnt--;
    }
    number[i] = a / pos;
    a = a % pos;
  }
}

int get_max_number(const int number[6], const int l)
{
  int max = 0;
  REP(i, l) {
    int pos = 1;
    for(int k = i + 1; k < l; k++) pos *= 10;
    max += number[i] * pos;
  }
  return max;
}

int get_min_number(const int number[6], const int l)
{
  int max = 0;
  REP(i, l) {
    int pos = 1;
    for(int k = i + 1; k < l; k++) pos *= 10;
    max += number[i] * pos;
  }
  return max;
}

int find_number(vector<pair<int, int> >& results, const int& a)
{
  for(auto e : results) {
    if(e.first == a) return e.second;
  }
  return -1;
}

int main()
{
  int a, l;
  while(cin >> a >> l) {
    if(a == 0 && l == 0) break;
    int number[l], max = 0, min = 0;
    vector<pair<int, int> > results;
    results.clear();
    results.push_back(make_pair(a, 0));
    for(int cnt = 1; cnt <= 20; cnt++) {
      fill(number, number + l, 0);
      set_zero_number(a, number, l);
      // REP(i, l) cout << number[i];
      // cout << endl;
      sort(number, number + l, greater<int>());
      max = get_max_number(number, l);
      reverse(number, number + l);
      min = get_min_number(number, l);
      a = max - min;
      // cout << max << " " << min << " " << a << endl;
      int f = find_number(results, a);
      if(f > -1) {
        cout << f << " " << a << " " << cnt - f << endl;
        break;
      }
      results.push_back(make_pair(a, cnt));
    }
  }
}
