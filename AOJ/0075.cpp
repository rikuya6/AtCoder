#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
#define REP(i, j) for (int i = 0; i < j; i++)

double calc(double w, double h)
{
  return w / (h * h);
}

int main()
{
  char work;
  int s;
  double w, h;
  while(cin >> s >> work >> w >> work >> h) {
    if (25 <= calc(w, h)) cout << s << endl;
  }
  return 0;
}
