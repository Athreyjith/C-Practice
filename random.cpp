#include<iostream>
#include<ctime>
int main(){

    srand(time(0));
    int rands = rand() % 3+1 ;

    switch (rands)
    {
    case 1:
        std::cout<<" u won a1";
        break;
    case 2:
        std::cout<<" u won a12";
        break;
    case 3:
        std::cout<<" u won a13";
        break;
    return 0;
}
}