#include <iostream>

using namespace std;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main(){
	long long a, b, x;
	long long cnt;
	cin >> a >> b >> x;
	cnt = (b / x) - (a / x);
	if(a % x == 0) cnt++;
	cout << cnt << endl;
}
