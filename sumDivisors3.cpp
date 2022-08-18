#include <iostream>

int main(){
    int n;
    int sum=0;
    std::cout<<"Ingrese un numero"<<std::endl;
    std::cin>>n;
    std::cout<<"La suma de los numeros menores e iguales, y divisibles por 3, al numero ingresado es: "<<std::endl;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum=sum+i;
        }
    }
    std::cout<<sum;
}
