#include<iostream>
int main(){

    for(int i=10 ; i>=0;i--){
        if(i == 2){
             break; // ends the iteration
        }
       if (i==7){
        continue; // skip the iteration
       }
std::cout<<i <<'\n';
    }
    
    std::cout<<"happy new year";

    return 0;
}