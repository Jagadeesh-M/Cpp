//https://www.codechef.com/START83D/problems/CHEFEREN
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int N,A,B;
        cin >> N >> A >> B;

        int e = N / 2;
        int o = N - e;

        cout << (A * e) + (B * o) << endl;
    }

    return 0;
}