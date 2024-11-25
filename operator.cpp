// terriory operator

// #include<iostream>
// int main(){
//     int age;
//     std::cout<<"enter the age "<<'\n';
//     std::cin >> age;

//     age >= 18 ? std::cout << " u r above 18" : std::cout<<" u r below 18";
//     return 0;
// }

// logical operator

#include<iostream>
int main(){
    bool sunny = true;
    int age;
    std::cout<<"enter the age "<<'\n';
    std::cin >> age;
 //      ||(only one condition has to be true)   !- oppsoie 
    if(age >= 18 &&  age <= 25){        
        std::cout<<" u r above 18 and below 25"<<'\n';}
    else{
        std::cout<<"nothing"<<'\n';
    }

    if(age >= 18 || age >= 15){        
        std::cout<<" u r above 18 and below 25"<<'\n';}
    else{
        std::cout<<"nothing"<<'\n';

    }

    if(!sunny){        
        std::cout<<" it is sunny "<<'\n';}
    else{
        std::cout<<"not sunnt"<<'\n';

    }


    return 0;
}
