#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;


int main() {
	// 入力
	int N,M;//マスの数、種類
	cin >> N >> M;
	vector<int> D(M);
    
	for (int i = 0; i < M; ++i) cin >> D[i];//出る目をインプット

	// 計算の舞台となる配列を宣言
	vector<bool> T(N+1,false);

	// 初期値を定める、0マス目には既に到着している
	T[0]=true;

	// 順に計算していく
	for (int i = 1; i < N+1; ++i) {//各マス数に参照

		for(int j = 0; j < M; ++j){//各出目を参照

			if(i-D[j]>=0&&T[i - D[j] ]){//出目がマス数より小さく、辿り着くことが出来る
				T[i]=true;
			}
		}

	}
	cout << (T[N] ? "Yes" : "No") << endl;
}