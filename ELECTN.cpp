//https://www.codechef.com/START84D/problems/ELECTN
#include <iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N , X;
        cin >> N >> X;

        int ages[N];
        int validVoters = 0;
        for(int j = 0; j < N; j++){
            cin >> ages[j];
            if(ages[j] >= X)
                validVoters++;
        }
        cout << validVoters << endl;
    }
    return 0;
}