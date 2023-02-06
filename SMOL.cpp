//https://www.codechef.com/LP1TO201/problems/SMOL
#include<iostream>
using namespace std;

int main(){

    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N,K;
        cin >> N >> K;
        if(N < K || K == 0)
            cout << N << endl;
        else
            {
                cout << N % K << endl;
            }
        
    }
    return 0;
}