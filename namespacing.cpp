// :: scope resolution operator

#include<iostream>

namespace first {
    int x=3;
}
namespace second{
    int y=10;
}
int main(){
    using namespace second;
    int x = 1;
    std::cout << x<<'\n';
    std::cout << first::x <<'\n';
    std::cout<<y<<'\n';
    return 0;
}

// int main(){
//     using std::cout;
//     using std::string;

//     string name= "athrey";
//     cout<< name;
//     return 0;

// }