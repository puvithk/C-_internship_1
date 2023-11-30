#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
class guessNumber{
    private:
    int secretNo,currentIter=0,noOfIter;
    public:
    guessNumber(int x ){
        srand(time(NULL));
        secretNo = rand()%100+1;
        noOfIter = x;

    }
    void playGmae(){
        int guess ;
        cout<<"Welcome to Guess the Number game! \n";
        while(currentIter<noOfIter){
            guess =0;
                cout<<"Enter the number uh guessed "<<endl;
                cin>>guess;
                if(cin.fail()){
                    cout<<"Invalid input"<<endl;
                    cin.clear();
                    continue;
                }
                currentIter++;
                if (guess==secretNo){
                    cout<<"Congratulations you won!!!"<<endl;
                    return;
                }
                else if (guess < secretNo+10 && guess > secretNo ){
                    cout<<" You are close its high"<<endl;
                    continue;
                }
                else if (guess>secretNo+10){
                    cout<<"Too high !!!!!"<<endl;
                    continue;
                }
                else if (guess > secretNo-10 && guess < secretNo){
                    cout<<" You are close its low "<<endl;
                }
                else {
                    cout<<"Too low !!!!!"<<endl;
                    continue;
                }
        }
        cout<<"You lose The Number is : "<<secretNo;
    }
};

int main(){
    guessNumber game(4);
    game.playGmae();
    return 0;
}