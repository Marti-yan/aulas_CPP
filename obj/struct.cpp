#include <iostream>
#include <string>


struct Humano{

    std::string nome;
    int idade;
    float altura;
    float peso;

    Humano(){ //defini como padrão, caso não passo os valores, esse vai ser os valores.
        this -> nome = "humano";
        this -> idade = 0;
        this -> altura = 0.10f;
        this -> peso = 0.5f;
    }// nesse caso o ponteiro 'this->' não é necessario 

    Humano(std::string n, int age = 0){
        nome = n;
        idade = age;
        altura = 0.10f;
        peso = 0.5f;
    }

    void ShowID(){
        std::cout << "Nome: "   << this->nome << "\n"; 
        std::cout << "Idade: "  <<   idade    << "\n";
        std::cout << "Altura: " <<   altura   << "\n";
        std::cout << "Peso: "   <<   peso     << "\n\n";
    }

};

int main (int argc, char **argv){

    Humano eu;
    eu.nome = "Yan";
    eu.idade = 18;
    eu.altura = 1.88f;
    eu.peso = 100.5f;

    //Humano teste("Teste",15,1.75f,75.f); //erro
    
    Humano vc;
    Humano sla("2N", 19);

    eu.ShowID();
    vc.ShowID();
    sla.ShowID();


return 0;
}