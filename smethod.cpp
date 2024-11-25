#include<iostream>

int main(){
    std::string name;
    std::cout<<"enter the name :"<<'\n';
    std::getline(std::cin , name);

    // if(name.length () >12)
    // {
    //     std::cout<<" length should be below 13";
    // }
    // else{
    //     std::cout<< "  welcome "<< name;
    // }


    // if(name.empty())
    // {
    //     std::cout<<" length is empty";
    // }
    // else{
    //     std::cout<< "  welcome "<< name;
    // }

// name.clear();
//  std::cout<< "hello "<<name;

// name.append("S@gmail.com");
//    std::cout<<name.at(2);


//    std::cout << name.find("b");

//    std::cout<<name.insert(0 , "ath");
   std::cout<<name.erase(0,4);
    return 0;
}