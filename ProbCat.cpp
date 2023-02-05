//https://www.codechef.com/LP1TO201/problems/PROBCAT
#include<iostream>
using namespace std;

int main(){

    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int rtng;
        cin >> rtng;
        if(rtng >= 1 && rtng < 100)
            cout << "Easy" << endl;
        if(rtng >= 100 && rtng < 200)
            cout << "Medium" << endl;
        if(rtng >= 200 && rtng <= 300)
            cout << "Hard" << endl;
    }
    return 0;
}