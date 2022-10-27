#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main() {
	// 入力
	int N;
	cin >> N;
	
	vector<int> C(N+1,0);
	C[0]=1;
    
	// 順に計算していく
	for (int i = 1; i <= N; ++i) {
		if(i-1 >= 0)C[i] += C[i-1];
		if(i-2 >= 0)C[i] += C[i-2];
		if(i-3 >= 0)C[i] += C[i-3];
	}
	cout << C[N] << endl;
}