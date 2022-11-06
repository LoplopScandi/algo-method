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

    long long answer = accumulate(A.begin(), A.end(), 0LL);
    

    cout << answer*answer << endl;


    return 0;
}