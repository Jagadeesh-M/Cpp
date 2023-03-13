//https://www.codechef.com/problems/ZEROSTRING
#include<iostream>
using namespace std;
int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc;i++){
        int N;
        cin >> N;
        char S[N];
        cin >> S;
        int countOfZeros = 0;
        for(int j = 0;j < N;j++){
            if(S[j] == '0')
                countOfZeros++;
        }

        if(countOfZeros < (N - countOfZeros))
            cout << countOfZeros + 1 << endl;
        else
            cout << N - countOfZeros << endl;
    }
    return 0;
}
