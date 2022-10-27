#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

int main(void){

    vector<vector<int>> A(4,vector<int>(4,0));
	for (int i = 0; i < 4; ++i) cin >> A[0][i];//0行目を初期化


    for(int i=0; i<4; i++){//行

        for(int j=0; j<4; j++){//列

            if(i>0){
                A[i][j] += A[i-1][j];//真上
                if(j>0) A[i][j] += A[i-1][j-1];//左上
                if(j<3) A[i][j] += A[i-1][j+1];//右上
                }

        }

    }
    cout << A[3][3] << endl;

}