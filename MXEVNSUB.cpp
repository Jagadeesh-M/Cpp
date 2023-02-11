//https://www.codechef.com/LP1TO201/problems/MXEVNSUB
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;
        int sumOfN = N*(N+1)/2;
        if(sumOfN % 2 == 0)
            cout << N << endl;
        else
            cout << N-1 << endl;
    }
    return 0;
}