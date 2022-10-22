#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	// 入力
	int N;
	cin >> N;
	
	vector<int> C(N);
	C[0]=1,C[1]=1;
	// 順に計算していく
	for (int i = 2; i < N; ++i) {
		C[i]=C[i-2]+C[i-1];
	}
	cout << C[N-1] << endl;
}