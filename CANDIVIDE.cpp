//https://www.codechef.com/START82D/problems/CANDIVIDE
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i< tc; i++){
        int N;
        cin >> N;

        if(N % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}