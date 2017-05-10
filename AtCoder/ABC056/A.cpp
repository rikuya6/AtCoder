#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  string a, b;
  cin >> a >> b;
  if(a == "H" && b == "H") cout << "H\n";
  else if(a == "H" && b == "D") cout << "D\n";
  else if(a == "D" && b == "H") cout << "D\n";
  else if(a == "D" && b == "D") cout << "H\n";
}
