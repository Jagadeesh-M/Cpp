//https://www.codechef.com/problems/MUFFINS3
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;
        cout << (N/2) + 1 << endl;
    }

    return 0;
}