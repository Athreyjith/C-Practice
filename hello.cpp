#include<iostream>  // preprocessor directive that includes the standard input-output stream library
// int main(){
//     std::cout << " hello world" << std::endl;
//     std::cout << " how are you "<< '\n';
//     std::cout << " i am athrey " ;
//     return 0;
// }


int main(){

    std::string name;
    int age ; 

    std::cout << " whats your name" <<'\n';
    std::cin >> name;

    std::cout<<" whats your age : "<<'\n';
    std::cin>> age;

    std ::cout <<" ypur name is "<< name << '\n';
    std::cout<<"you are "<<age<< " years old";
    return 0;
}