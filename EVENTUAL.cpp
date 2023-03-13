//https://www.codechef.com/problems/EVENTUAL
#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i< tc; i++){
        int N;
        cin >> N;
        char S[N];
        cin >> S;
        int frequency[256] = {0};

        if(N%2 != 0)
            {
                cout << "NO" << endl;
                continue;
            }
        
        for(int j = 0; j < N;j++){
            frequency[S[j]]++;
        }

        int isOdd = false;
        for(int k = 0; k < 256; k++)
        {
            if(frequency[k]%2 != 0)
                isOdd = true;
        }

        if(isOdd)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;


    }
    return 0;
}