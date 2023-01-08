#include <string>
#include <iostream>

int main(int argc, char **argv){
    for(int i=0; i<5; i++){
        int x; // valor aleatorio
        
        std::cout << "Digite um numero: ";
        std::cin >> x; // input


        if (x > 0){
            std::cout << "X é maior que 0 \n";
        }else if (x < 0){
            std::cout << "X é menor que 0 \n";
        }else{
            std::cout << "X é igual que 0 \n";
        }
    }
return 0;}