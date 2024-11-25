#include<iostream>
#include <cctype> 
int main(){
    char grade;
    std::cout<< " enter the grade between A to C"<<'\n';
    std::cin >>grade;
    grade = toupper(grade);

    switch (grade)
    {
    case 'A':
    std::cout<<" u have got above 90"<<'\n';
        break;
    case 'B':
    std::cout<<" u have got above 70 below 90"<<'\n';
        break;
    case 'C':
    std::cout<<" u have got below 70"<<'\n';
    break;
    
    default:
        std::cout<<" wrong entry";
        break;

}
    return 0;
}
