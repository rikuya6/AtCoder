#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  cout << (char)toupper(s1[0]) << (char)toupper(s2[0]) << (char)toupper(s3[0]) << endl;
}
