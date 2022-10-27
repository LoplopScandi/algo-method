#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

const int INF = 1000000;

int main() {
	// 入力
	int N,M;
	cin >> N >> M;
	vector<int> A(N);
    
	for (int i = 0; i < N; ++i) cin >> A[i];

	// 計算の舞台となる配列を宣言
	vector<int> T(N,INF);

	// 初期値を定める
	T[0] = 0;

	// 順に計算していく
	for (int i = 1; i < N; ++i) {

        for(int k=1;k <= M; ++k){

            if(i >= k){
                T[i]=min(T[i], T[i-k] + k*A[i]) ;
                //T[i] には最終的には T[i-1] + A[i], T[i-2] + A[i] * 2, ..., T[i-M] + A[i] * M の最小値が格納されるようになる
            }

        }
	}
	cout << T[N-1] << endl;
}