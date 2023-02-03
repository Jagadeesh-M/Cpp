#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int i = 0; i < tc ; i++){
        int N,X,ans=0;
        cin >> N >> X;
        for(int j = 0; j < N ; j++){
            int S, R;
	        cin >> S >> R;
             if(S <= X){
	            ans = max(ans, R);
	        }
        }
        cout << ans << endl;
    }
    return 0;
}