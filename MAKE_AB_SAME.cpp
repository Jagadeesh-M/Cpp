//https://www.codechef.com/START82D/problems/MAKE_AB_SAME
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;

        int arryA[N];
        int arryB[N];

        int numberOfOnesinA = 0;
        int numberOfZerosinA = 0;

        for(int j = 0; j < N; j++){
            cin >> arryA[j];
            arryA[j] ? (numberOfOnesinA++) : (numberOfZerosinA++);
        }
        for(int j = 0; j < N; j++){
            cin >> arryB[j];
        }

        bool sameArray = true;
        for(int k = 0; k < N; k++){
            if(arryA[k] != arryB[k])
                {
                    sameArray = false;
                    break;
                }
        }

        if(sameArray){
            cout << "YES" << endl;
        }
        else{
            // see if number of 0's are >= 3 and atleast one 1 is there 
            if(numberOfZerosinA >= 3 && numberOfOnesinA >= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

    }

    return 0;   
}