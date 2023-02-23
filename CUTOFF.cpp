//https://www.codechef.com/START78D/problems/CUTOFF
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N,X;
        cin >> N >> X;

        int marksArry[N];

        for(int j = 0;j < N; j++){
            cin  >> marksArry[j];
        }

        sort(marksArry,marksArry + N, greater<int>());

        for(int k = 0; k < X; k++){

            if(X == k + 1)
                {
                    cout << marksArry[k] - 1 << endl;
                    break;
                }
        }

    }
    return 0;
}


