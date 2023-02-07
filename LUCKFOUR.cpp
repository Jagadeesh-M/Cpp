//https://www.codechef.com/LP1TO205/problems/LUCKFOUR
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int num;
        cin >> num;
        int count = 0;
        for(int j = num ; j > 0 ;){
            if( j%10 == 4)
                count += 1;
            
            j = j / 10;
        }
        cout << count << endl;
    }

    return 0;
}