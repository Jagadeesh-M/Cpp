//https://www.codechef.com/START84D/problems/MELTGOLD
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i< tc; i++){
        int X, Y;
        cin >> X >> Y;

        int minutesRequiredtoMelt = 0;
        int counter = 1;
        do{
            if(X <= (Y + counter))
                break;
            
            Y += counter;
            counter++;
        }while(X > (Y + counter));

        cout << counter << endl;
    }
    return 0;
}