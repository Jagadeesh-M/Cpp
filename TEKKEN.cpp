
//https://www.codechef.com/START77D/problems/TEKKEN

/*
if(A >= B && A >= C)
YES
else if( A < B && A < C)
NO
else if(A > B && A < C || A < B && A > C)
if(min(B,C) < A)
    YES
    else
    NO
    */


   #include<iostream>
   using namespace std;

   int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i< tc; i++){
        int A,B,C;
        cin >> A >> B >> C;

        int h = abs(B - C);
        if(A > h)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
   }