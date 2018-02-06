#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main()
{
  string a, b;
  cin >> a >> b;
  stringstream ss;
  ss << a + b;
  int n, work;
  ss >> n;
  work = sqrt(n);
  if (work * work == n)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
