//https://www.codechef.com/LP1TO205/problems/SIMPSTAT
#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N,K;
        cin >> N >> K;
        int measurements[N];
        for(int j = 0 ; j < N ; j++){
            cin >> measurements[j];
        }

        sort(measurements,measurements+ N);
        double sum = 0, res;
        for(int k = K; k <= (N - K - 1); k++){
            sum +=  measurements[k];
        }
        //cout << "Sum " << sum << endl; 
        res = (sum / (N - (2*K)));
        cout << fixed << setprecision(6) << res << endl;
    }

    return 0;
}