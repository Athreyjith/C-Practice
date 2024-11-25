#include<iostream>
int main(){

    int x; // declaration
    x=5; // assignment
    int y = 6, sum;
    sum =  x+y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum <<'\n';


// double
    double da =9.12;  // float or double
    std::cout<< da << '\n';
// single character

    char grade = 'A';
    std::cout<< grade << '\n';

// boolean
    bool student = false;
    std::cout << student <<'\n';
    

// string - object that repracents sequence of text

    std::string name = "athrey";
    std::string classroom ;
    classroom = " secondA";

    std::cout << name<<'\n';
    std::cout << classroom<<'\n';
    std::cout<<" hello " << name << '\n';


    int age = 21;
    std::cout<< " you are "<<age<< " years old";

// const
    const double PI = 3.14;
    std::cout<<PI<<'\n';
    return 0;


}