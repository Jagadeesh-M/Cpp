//https://www.codechef.com/START81D/problems/SUNNYDAY
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc; i++){
        int temp;
        const int nTemp = 24;
        cin >> temp;

        if(temp > nTemp)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}