#include <bits/stdc++.h>
using namespace std;

int main(void){

    int N,M;
    cin >> N >> M;
//lon long 64bitの変数
    int x,y,z;
    long long count=0;

//x,yを動かして、zの範囲を考える
    for(x = 1; x <= N; x++){
        for(y = 1; y <= N; y++){
            if(0 < min(N,M - (x + y)) ){
                count += min(N,M - (x + y));
            }            
        }

    }

    cout << count << endl;

    return 0;
}