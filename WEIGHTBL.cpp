//https://www.codechef.com/LP1TO201/problems/WEIGHTBL
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int w1,w2,x1,x2,M;
        int minPosWghtIncrease,maxPosWghtIncrease;
        int weightDiff;
    
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        minPosWghtIncrease = x1 * M;
        maxPosWghtIncrease = x2 * M;
        weightDiff = w2 - w1;

        if(weightDiff >= minPosWghtIncrease && weightDiff <= maxPosWghtIncrease)
            cout << 1 << endl;
        else
            cout << 0 << endl;

    }
    return 0;
}