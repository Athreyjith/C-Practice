#include<iostream>
#include<cmath>

int main(){
    double x =2;
    double y=4;
    double z=21.923;
    double xy ;
    double yx,xy1,xy2,m,n,v,a;

    xy= std::max(x,y);
    yx=std::min(x,y);
    xy1= pow(2,4);
    xy2=sqrt(9);
    m= abs(-9);
    n=round(z);
    a=ceil(z); // big
    v=floor(z);
    
    std::cout<<xy<<'\n';
    std::cout<<yx<<'\n';
    std::cout << xy1<<'\n';
    std::cout << xy2<<'\n';
    std::cout << v <<'\n';
    return 0;
}

