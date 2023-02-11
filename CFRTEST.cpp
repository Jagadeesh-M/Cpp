//https://www.codechef.com/LP1TO205/problems/CFRTEST
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int noOfFrnds;
        cin >> noOfFrnds;

        int partyDays[noOfFrnds];
        for(int j = 0; j < noOfFrnds; j++){
            cin >> partyDays[j];
        }

        sort(partyDays,partyDays + noOfFrnds);

        int count = noOfFrnds;
        for (int x = 1; x < noOfFrnds; x++){
            if(partyDays[x] == partyDays[x-1])
                count--;
        }
        cout << count << endl;
    }
    return 0;
}