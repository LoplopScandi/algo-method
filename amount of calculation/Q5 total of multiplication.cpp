#include <bits/stdc++.h>
using namespace std;
//積の総和
int main(void){

    long N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0 ; i < N; i++){
        cin >> A[i];
    }

    long long S = accumulate(A.begin(), A.end(), 0LL);
    // 二乗和を求める
    long long T = 0;
    for(auto ai: A){
        T += ai * ai;
    }
    
    T=(S*S - T)/2;

    cout << T << endl;


    return 0;
}