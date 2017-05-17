#include <iostream>

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;

int main(){
	long long N, M;
	long long work, work1;
	long long cnt = 0;
	cin >> N >> M;

	work = N;
	work1 = M;
	work1 -= work * 2;
	if(work1 < 0){
		cout << (M / 2) << endl;
		return 0;
	}
	cnt = work;
	cnt += work1 / 4;
	cout << cnt << endl;

	return 0;
}
