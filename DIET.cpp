//https://www.codechef.com/problems/DIET
#include<iostream>

using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N,K;
        cin >> N >> K;
        int arry[N];
        int proBalance = 0;
        bool isDietPlanSuccess = true;
        for(int j = 0; j < N; j++){
            cin >> arry[j];
        }
        for(int j = 0; j < N; j++){
            if((arry[j] + proBalance) >= K)
                {
                    proBalance = (arry[j] + proBalance) - K;
                }
            else
                {
                    isDietPlanSuccess = false;
                    cout << "NO " << j + 1 << endl;
                    break;
                }
        }
        if(isDietPlanSuccess){
            cout << "YES" <<endl;
        }
    }
    return 0;
}


