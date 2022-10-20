#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int N;
    cin >> N ;
    vector<int> A(N);
    for(int i; i < N; i++) cin >> A[i];

    int count = 0;
    for (int i=0; i<N; ++i) {

        if (A[i]>A[i-1]&&i>0) {

            count+=1;

        }

    }
        cout << count << endl;

}