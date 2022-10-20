#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int N;
    cin >> N ;
    vector<int> A(N);
    for(int i; i < N; i++) cin >> A[i];

    // 線形探索(集計)、頭良い

    vector<int> count(9);  
    for (int i=0; i<N; ++i) {   
        count[A[i]-1]++;
    }


    // 線形探索(回数)
    int index = 0;
    int ans = 0;
    for (int i=0; i<9; ++i) {
        if(count[index]<count[i]){
            index=i;
            ans = i+1;
        }

    }



    cout << ans << endl;

    return 0;

}