#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	// 入力
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; ++i) cin >> A[i];

	// 計算の舞台となる配列を宣言
	vector<int> T(N);

	// 初期値を定める
	T[0] = 0, T[1] = A[1];

	// 順に計算していく
	for (int i = 2; i < N; ++i) {
		T[i] = min(T[i-1] + A[i],T[i-2] + 2*A[i]);
	}
	cout << T[N-1] << endl;
}