//https://www.codechef.com/problems/TABLET
#include<iostream>
#include<string>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0;i < tc;i++){
        int N, B;
        cin >> N >> B;
        int price = 0, tabsize = 0;
        string output = "";

        for(int j = 0; j < N;j++){
            int W, H, P;
            cin >> W >> H >> P;

            if(P > B && price == 0){
                output = "no tablet";
            }

            if(P <= B && (W * H) > tabsize){
                output = to_string(W * H);
                tabsize = W * H;
                price = P;
            }
        }

        cout << output << endl;
    }
    return 0;
}