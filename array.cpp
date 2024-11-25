#include<iostream>
#include<string>
// int main(){
//     int age=9;
//     std::string car [] ={" rahmesh","rahul"};
//     std::cout<<car[0];
//     for(const std::string  c:car ){
//         std::cout<<c<<'\n';
//     }



//     char age1[] ={'a','b','c'};
//     std::cout<< sizeof(age1)/sizeof(char) << "elements";
    
//     // std::cout<< sizeof(age)<< " bytes";
//     return 0;
// }

int main (){
std::string car[3] ={"rahulda"," rahmesh","rahul"};
for(int i=0;i<sizeof(car)/sizeof(std::string);i++){
    std::cout<<car[i] << '\n';
    }
    return 0;
}