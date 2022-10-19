#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int N,V;
    cin >> N >> V ;
    vector<int> A(N);
    for(int i; i < N; i++) cin >> A[i];

    int count = -1;
    for (int i=0; i<N; ++i) {

        if (A[i] == V) {

            count=i;

        }

    }
        cout << count << endl;

}