#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N; cin >> N;

    vector<int> A(N);

    for (int i=0;i<N;i++){
        cin >> A[i];
    }

    int M = *max_element(A.begin(),A.end());//配列内の最大値を検索
    int m = *min_element(A.begin(),A.end());//配列内の最小値を検索
    cout << M-m << endl;
    return 0;

}