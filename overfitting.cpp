#include<iostream>

std::string student();
std::string student(std::string name);
int main(){
   
    
    student("rahul");
    
    return 0;
}

std::string student(){
std::cout<<"hey u " <<'\n';
}
std::string student(std::string name){
    std::cout<<"hello "<< name <<'\n';
}


// void student1();
// void student(std::string name);
// int main(){
//     student1();
    
//     student("rahul");
    
//     return 0;
// }

// void student1(){
// std::cout<<"hey u " <<'\n';}
// void student(std::string name){
//     std::cout<<"hello "<< name <<'\n';
// }