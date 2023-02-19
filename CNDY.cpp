//https://www.codechef.com/problems/CNDY
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc;i++){
        int N;
        cin >> N;
        int arry[2 * N];
        for(int j = 0;j < (2 * N);j++){
            cin >> arry[j];
        }
        sort(arry,arry + (2 * N));
        int duplicates = 0;
        string output = "Yes";
        for(int k = 1;k < (2 * N);k++){
            if(arry[k] == arry[k-1])
                duplicates++;
            else
                duplicates = 0;
                
            if(duplicates == 2)
            {
                output = "No";
                break;
            }
        }
        //cout << "duplicates: " << duplicates << endl;
        
            cout << output << endl;
    }
    return 0;
}