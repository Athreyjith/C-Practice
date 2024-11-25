#include<iostream>
#include<ctime>

int main(){

    int guess,answer,tries = 0;
    srand(time(0));
    answer = (rand () % 100) +1;

    while (guess != answer){
        std::cout<<" guess the value from 1 -100  :"<<'\n';
        std::cin >> guess ;
        tries ++;

        if( guess > answer){
            std::cout << " go for lower number "<<'\n';
        }
        else if(guess <answer){
            std::cout << " go fro higher number "<<'\n';
        }
        else {
            std::cout<<answer << "is correct answer u took "<< tries << " tries";
        }
        }
    return 0;
}