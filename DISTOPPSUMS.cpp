//https://www.codechef.com/problems/DISTOPPSUMS
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0;i < tc;i++){
        int N;
        cin >> N;
        int arry[N];
        if(N == 2)
            {
                cout << "1 2" << endl;
                continue;
            }
        arry[0] = 1;
        arry[N-1] = 2;
        for(int j = 1;j < (N/2);j++){
            arry[j] = arry[j-1] + 2;
        }
        for(int k = N-2; k >= N/2; k--){
            arry[k] = arry[k+1] + 2;
        }
        
        for(int x = 0; x < N; x++){
            cout << arry[x] << ((x == (N-1)) ? "" : " ");
        }
        cout << endl;
    }
    return 0;
}