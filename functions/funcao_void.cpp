#include <string>
#include <iostream>

// <tipo de retorno> <nome> (<argumentos...>){
// escopo    
// }

// void para funções que não retornam nada

void print_teste(int x){ // faz uma copia da variavel, so altera dentro deste escopo
    x += 1;
    std::cout << x << " Teste \n";
}

void print_teste2(int& x){ //altera o valor da variavel global / necessita ja ter sido declarada
    x += 1;
    std::cout << x << " Teste \n";
}

int main(int argc, char **argv){

    int x = 10;
    int y = 20;

    print_teste(x);
    print_teste(y);
    print_teste(30);

    std::cout << x << "\n";

    print_teste2(x);
    print_teste2(y);

    std::cout << x << "\n";

return 0;
}