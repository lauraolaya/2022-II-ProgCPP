#include <iostream>

int main(){
    int n;
    std::cout<<"Ingrese un numero"<<std::endl;
    std::cin>>n;
    std::cout<<"Los numeros, multiplos de 3, menores o iguales al numero ingresado son: "<<std::endl;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            std::cout<<i<<std::endl;
        }
    }
}
