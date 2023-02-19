//https://www.codechef.com/LP1TO205/problems/GFTSHP
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

/*
sort
sum of all gifts with max value/2 
if(sum <= K)
then
N
else
*/

int main(){
    int tc;
    cin >> tc;
    
    for(int i = 0; i < tc; i++){
        int N,K;
        cin >> N >> K;
        int gArry[N];
        int sum = 0,sumD;
        for(int j = 0; j < N; j++){
            cin >> gArry[j];
            sum += gArry[j];
        }
        if(sum <= K)
            {
                cout << N << endl;
                continue;
            }
        sort(gArry,gArry + N);

        for(int k = N - 1; k >= 0; k--){
            //cout << "Sum " << sum  << endl <<gArry[k]<<endl;
            sum = sum - gArry[k];
            if((sum + ((gArry[k] + 1) / 2)) <= K)
                {
                    cout << k + 1 << endl; 
                    break;
                }
            if(k == 0 && (((gArry[k] + 1) / 2)) > K){
                cout << 0 << endl;
            }
        }

    }

    return 0;
}