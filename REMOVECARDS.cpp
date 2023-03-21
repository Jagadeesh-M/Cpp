//https://www.codechef.com/problems/REMOVECARDS
#include<iostream>
#include<map>

using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;

        int arry[N];
        map<int, int> m;

        for(int j = 0; j < N ; j++){
            cin >> arry[j];
            m[arry[j]]++;
        }

        int frequency = 0;
        for(int k = 0; k < N; k++){
            if(m[arry[k]] > frequency)
                frequency = m[arry[k]];
        }
        cout << (N - frequency) << endl;
    }
    return 0;
}