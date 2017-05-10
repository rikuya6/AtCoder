#include <iostream>
#include <string>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++ )

int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a + b)  % 24 << endl;
}
