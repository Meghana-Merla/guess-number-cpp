#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int getRandomNumber() {
        return rand()%100+1;
}

string answer(int original,int guess){
        if(guess>original+10||guess<original-10){
                return "Cold!";
        }else if(guess==original) {
                return "Right";
        }else{
                return "Hot!";
        }
}

void run_guess(){
        int original=getRandomNumber();
        int guess;
        cout<<"Enter a number between 1 to 100(both inclusive):"<<endl;
        cin>>guess;
        while (1){
                string a=answer(original,guess);
                if(a=="Right"){
                        cout<<"Great!! You guessed it Right!!";
                        break;
                }else{
                        cout<<a<<endl;
                        cout<<"Enter other number:"<<endl;
                        cin>>guess;
                }
        }
}
int main() {
        srand(time(0));
        run_guess();
        return 0;
}