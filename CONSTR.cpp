//https://www.codechef.com/START83D/problems/CONSTR
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
        bool isDup = false;
        do{
            isDup = false;
            for(int j = 1;j < N; j++){
            if(S[j] == S[j-1] && S[j] == S[j+1])
            {
                isDup = true;
                S.erase(j,2);
            }

            }
        } while(isDup);

       

        cout << S << endl;
        
    }
    return 0;
}

