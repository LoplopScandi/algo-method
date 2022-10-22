#include <iostream>
#include <vector> 
#include <stdlib.h>
using namespace std;

int main(void){
    //input
    int N,X,Y;
    cin >> N >> X >> Y;

    //creat list
    vector<int> A(N);

    A[0]=X,A[1]=Y;
    for(int i=2; i < N; i++){
        A[i]=(A[i-1]+A[i-2])%100;
    }
    cout << A[N-1] << endl;

}