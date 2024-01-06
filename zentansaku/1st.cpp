#include <iostream>
#include <bits/stdc++.h>
#include <vector> 

using namespace std;



int main() {

    // 入力データを受け取る

    int N, V;

    cin >> N >> V;

    vector<int> A(N); 

    for (int i=0; i<N; ++i) {

        cin >> A[i];

    }

    

    // 整数 V があるかどうかを調べる

    bool flag = false;

    for (int i=0; i<N; ++i) {

        if (A[i] == V) {

            flag = true;

        }

    }

    

    // 答えを出力する

    if (count(A.begin(), A.end(), V) != 0) 

        cout << "Yes" << endl;

    else

        cout << "No" << endl;

}