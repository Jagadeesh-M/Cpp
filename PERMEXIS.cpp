//https://www.codechef.com/LP1TO205/problems/PERMEXIS

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;
        int arry[N];
        for(int j = 0; j < N; j++){
            cin >> arry[j];
        }  
        sort(arry,arry + N);

        bool moreDiff;
        for(int k = 0; k < N - 1 ; k++){
            if(abs(arry[k] - arry[k+1]) > 1)
                moreDiff = true;
        }
        if(moreDiff)
            cout << "NO" << endl;
        else  
            cout << "YES" << endl;
    }

    return 0;
}