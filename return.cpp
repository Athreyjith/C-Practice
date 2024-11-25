#include<iostream>
// double square(double length);
// double cube(double length1);
// int main(){
//     double result ,result2;
// double length1 = 6;
//     double length = 5;
//     result = square(length);
//     result2 = cube(length1);
//     std::cout<<result <<'\n';
//     std::cout<<result2 <<'\n';
//     return 0;
// }
// double square(double length){
//     return length * length;
// }
// double cube(double length1){
//     return length1 * length1 * length1; 
// } 

std::string concatstrings(std::string string1, std::string string2);
int main(){
    std::string first = "atrhey";
    std::string second = "jith";
    std::string fullname = concatstrings(first, second);
    std::cout<<"hello "<<fullname;
    return 0;
}

std::string concatstrings(std::string string1, std::string string2){
    return string1 +" " + string2;
}