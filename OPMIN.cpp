//https://www.codechef.com/START82D/problems/OPMIN
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;

        int arry[N];
        for(int j = 0; j < N; j++){
            cin >> arry[j];
        }
        sort(arry, arry + N);
        bool sameNumber = true;
        if(N > 1){
            for(int k = 0; k < N - 1; k++){
                if(arry[k] != arry[k+1]){
                    sameNumber = false;
                    cout << N - (k+1) << endl;
                    break;
                }
            }
        }

        if(sameNumber || N == 1)
            cout << "0" << endl;

    }
    return 0;
}