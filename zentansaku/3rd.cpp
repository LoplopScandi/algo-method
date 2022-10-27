#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int N ;
    cin >> N ;
    vector<int> A(N);
    for(int i; i < N; i++) cin >> A[i];

    //線形探索（脳筋）
    int count =0;
    for(int i=0; i<N;i++){
        if(A[i]>0){
            count++;
        }
    }

    cout << count << endl;
    return 0;

}
