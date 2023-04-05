//https://www.codechef.com/START84D/problems/MAX1XOR
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;
        string S;
        cin >> S;

        string s1 = "0" ,s2 = "1";
        
        for(int j = 0; j < N - 1; j++){
            s1 += to_string((int)S[j] ^ (int)s1[j]);
            s2 += to_string((int)S[j] ^ (int)s2[j]);
        }
        
        int s1Count = 0,s2Count = 0;
        for(int k = 0;k < N; k++){
            if(s1[k] == '1')
                s1Count++;
            if(s2[k] == '1')
                s2Count++;
        }
        if(s1Count > s2Count)
            cout << s1Count << endl;
        else
            cout << s2Count << endl;

    }
    return 0;
}