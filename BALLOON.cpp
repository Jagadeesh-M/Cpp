//https://www.codechef.com/LP1TO205/problems/BALLOON
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int noOfProbs;
        cin >> noOfProbs;
        int probArry[noOfProbs];

        for(int j = 0; j < noOfProbs; j++){
            cin >> probArry[j];
        }

        for(int k = noOfProbs - 1; k >= 0; k--){
            if(probArry[k] == 1 || probArry[k] == 2 || probArry[k] == 3 || probArry[k] == 4 ||
                probArry[k] == 5 || probArry[k] == 6 || probArry[k] == 7)
                {
                    cout << k + 1 << endl;
                    break;
                }
            else
                continue;
        }
    }

    return 0;
}