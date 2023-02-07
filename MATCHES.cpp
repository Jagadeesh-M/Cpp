//https://www.codechef.com/LP1TO205/problems/MATCHES
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int A,B,Sum = 0,Matches = 0;
        cin >> A >> B;
        Sum = A+B;

        for(int j = Sum; j > 0;){
            int k = j % 10;

            switch(k){
                case 0:
                    Matches += 6; break;
                case 1:
                    Matches += 2; break;    
                case 2:
                    Matches += 5; break;
                case 3:
                    Matches += 5; break;
                case 4:
                    Matches += 4; break;
                case 5:
                    Matches += 5; break;
                case 6:
                    Matches += 6; break;
                case 7:
                    Matches += 3; break;
                case 8:
                    Matches += 7; break;
                case 9:
                    Matches += 6; break;

            }

            j = j / 10;
        }
        cout << Matches << endl;
    }

    return 0;
}