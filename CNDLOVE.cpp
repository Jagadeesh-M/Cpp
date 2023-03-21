//https://www.codechef.com/problems/CNDLOVE
#include<iostream>

using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;

        int Sum = 0;
        for(int j = 0; j < N; j++){
            int num;
            cin >> num;
            Sum += num;
        }

        if(Sum % 2 != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}