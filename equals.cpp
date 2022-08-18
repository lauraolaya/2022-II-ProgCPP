#include <iostream>

int main(){
    int n;
    std::cout<<"Ingrese el largo del cuadrado"<<std::endl;
    std::cin>>n;
    if(n==2){std::cout<<"##"<<std::endl<<"##";}
    if(n>2){
        for(int i=1;i<=n;i++){
            std::cout<<"#";
        }
        std::cout<<std::endl;
        for(int j=1;j<=n-2;j++){
            std::cout<<"#";
            for(int k=1;k<=n-2;k++){std::cout<<" ";}
            std::cout<<"#"<<std::endl;
        }
         for(int i=1;i<=n;i++){
            std::cout<<"#";
        }
        }
}
