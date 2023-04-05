//https://www.codechef.com/problems/AVG


#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc;i++){
        int N,K,V;
        cin >> N >> K >> V;

        int arry[N];
        int sum = 0;
        int totalElements = N + K;
        for(int j = 0;j < N;j++){
            cin >> arry[j];
            sum += arry[j];
        }

        int remainingNumbersSum = (V * totalElements) - sum;
        
        if(remainingNumbersSum > 0 && remainingNumbersSum % K == 0)
            cout << remainingNumbersSum / K << endl;
        else
            cout << "-1" << endl;

    }
    return 0;
}