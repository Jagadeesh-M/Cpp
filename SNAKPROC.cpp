//https://www.codechef.com/problems/SNAKPROC
#include<iostream>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int N;
        cin >> N;
        string snake;
        cin >> snake;
        string shortSnake;
        bool res = true;
        for(int j = 0; j < N; j++){
           if(snake[j] != '.'){
            shortSnake += snake[j];
           }
        }
        if(shortSnake.length() % 2 != 0){
            res = false;
        }
        else{
            for(int i=0; i<shortSnake.length(); i++)
	         {
	            if(i%2==0)
	            {
	                if(shortSnake[i]=='T')
	                  res=false;
	            }
	            else
	            {
	                if(shortSnake[i]=='H')
	                 res=false;
	            }
	         }
        }

         if(res)
	       cout<<"Valid"<<endl;
	      else
	        cout<<"Invalid"<<endl;
	      
	    

    }

    return 0;
}