//https://www.codechef.com/START84D/problems/MAX_BIN
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N, K;
        cin >> N >> K;

        string S;
        cin >> S;

        if(S[0] == '0')
            {
                S[0] = '1';
                K--;
            }
        
        string str(K, '0');
        cout << S + str << endl;
    }
    return 0;
}