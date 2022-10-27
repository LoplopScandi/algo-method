#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main(void){

    int N;
    cin >> N;

    vector<vector<int>> A(N,vector<int>(N,0));
	for (int i = 0; i < N; ++i) cin >> A[0][i];//0行目を初期化


    for(int i=1; i<N; i++){//行

        for(int j=0; j<N; j++){//列


                A[i][j] += A[i-1][j];//真上
                if(j>0) A[i][j] += A[i-1][j-1];//左上
                if(j+1<N) A[i][j] += A[i-1][j+1];//右上

                A[i][j]=A[i][j]%100;
                }



    }
    cout << A[N-1][N-1] << endl;

}