//https://www.codechef.com/LP1TO205/problems/POLIN

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){

        int N;
        cin >> N;

        int xArry[N],yArry[N];

        for(int j = 0; j < N ; j++){
            cin >> xArry[j] >> yArry[j];
        }

        sort(xArry,xArry + N);
        sort(yArry,yArry + N);
        int xDistinct = 1, yDistinct = 1;
        for(int k = 1; k < N; k++){
            if (xArry[k] != xArry[k - 1])
                xDistinct++;
            if (yArry[k] != yArry[k - 1])
                yDistinct++;
        }

        cout << xDistinct + yDistinct << endl;
    }

    return 0;
}