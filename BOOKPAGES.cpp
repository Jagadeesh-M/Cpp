//https://www.codechef.com/START81D/problems/BOOKPAGES
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc; i++){
        int N;
        cin >> N;
        
        int pages = 0;
        for(int j = 0; j < N; j++){
            int jp;
            cin >> jp;
            pages += jp;
        }
        if(pages % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
