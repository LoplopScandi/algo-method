#include <vector>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;
    int count = 1;

    for (int i=0; i<N-1; ++i) {   
        if(S[i]!=S[i+1]){
            count++;
        }
    }

    //出力例
    cout << count << endl;

    return 0;

}