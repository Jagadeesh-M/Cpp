//https://www.codechef.com/LP1TO205/problems/HOLIDAYS
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N,W;
        cin >> N >> W;
        int wageDays[N];
        for(int j = 0; j < N; j++){
            cin >> wageDays[j];
        }

        sort(wageDays,wageDays + N);

        int wageSum = 0,minDays = 0;

        for(int k = N-1; k >= 0; k--){
            wageSum += wageDays[k];
            minDays++;
            if(wageSum >= W){
                break;
            }
        }

        cout << N - minDays << endl;
    }
    return 0;
}
