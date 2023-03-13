//https://www.codechef.com/problems/ODDPAIRS
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;
        cout << N * N / 2 << endl ;
    }

    return 0;
}