#include<iostream>


void helloWorld(std::string name,int age);
int main(){
    
    std::string name = "rahl";
    int age =21;
    helloWorld(name,age);
    return 0;
}

void helloWorld(std::string name,int age) {
    std::cout<<" hello "<<name<<"and age is " << age <<'\n';
}

// user defined function is used call a funcation outside the main funcation