#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

vector<pair<string, int> > data;

void set_calc_data(string name, int w, int l, int d)
{
  int score = w * 3 + l * 0 + d * 1;
  data.push_back(make_pair(name, score));
}

bool pairCompare(const pair<string, int>& first_elem, const pair<string, int> & second_elem)
{
  return first_elem.second > second_elem.second;
}

int main()
{
  int n;
  cin >> n;
  while(true) {
    data.clear();
    string name;
    int w, l, d;
    REP(i, n) {
      cin >> name >> w >> l >> d;
      set_calc_data(name, w, l, d);
    }
    stable_sort(data.begin(), data.end(), pairCompare);
    for(auto it : data) {
      cout << it.first << "," << it.second << endl;
    }
    cin >> n;
    if(n != 0)
      cout << '\n';
    else
      break;
  }
  return 0;
}
