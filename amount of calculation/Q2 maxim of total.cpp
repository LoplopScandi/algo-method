#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N;
    cin >> N;
    vector<int> A(N);

    for(int i=0; i <N; i++){
        cin >> A[i];
    }
//↑ここまでは変数の代入
//lon long 64bitの変数
    long long T =0;
     for(int i=0; i <N; i++){
        T += A[i];
    }

    vector<long long> S(N);
    for(int i=0; i <N; i++){
        S[i] = T-A[i];
    }


    long long ans = *max_element(S.begin(),S.end());

    cout << ans << endl;

    return 0;
}