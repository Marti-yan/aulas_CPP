#include <string>
#include <iostream>

int main(int argc, char **argv){
    int x; //valor aleatorio
    //std::cout << x;

    std::cin >> x ; //input

    if (x > 0){
        std::cout << "X é maior que 0";
    }else if (x < 0){
        std::cout << "X é menor que 0";
    }else{
        std::cout << "X é igual que 0";
    }
return 0;}