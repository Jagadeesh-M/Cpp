//https://www.codechef.com/START83D/problems/BUDTECH
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
         int n;
         cin >> n;
         int N = n * 1000;
         cout << (N - (N/2)) / 5 << endl;
    }
    return 0;
}