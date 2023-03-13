//https://www.codechef.com/problems/ATTENDU
#include<iostream>
using namespace std;

int main(){
    int tc;
    std::cin >> tc;
    const int workingDays = 120;
    for(int i = 0;i < tc; i++){
        int N;
        std::cin >> N;

        std::string s;
        std::cin >> s;

        int daysPresent = 0;

        for(int j = 0; j < N ; j++){
            if(s[j] == '1')
                daysPresent++;
        }
        float res = (((workingDays - N) + daysPresent) * 100 / workingDays) ;
        //cout << res << endl;
        if(res >= 75)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;    
        

    }

    return 0;
}