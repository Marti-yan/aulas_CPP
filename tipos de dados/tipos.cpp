#include <iostream>
#include <string>

int main(int argc, char** argv) {
	std::cout << "Hello world\n";

	int myint = 0;
	myint = 10;
	std::cout << myint << "\n";
	myint = 10 + 20;
	std::cout << myint << "\n";
	myint += 5;
	std::cout << myint << "\n";
	myint -= 5 + myint;
	std::cout << myint << "\n";
	int myInt = 10;

	unsigned int myUint = 0;  // int apenas para numeros positivos
	float myFloat = 0.0f;    // tem q por o 'f' para reconhecer como float
	double myDouble = 0.0;  // maior precisao
	bool myBool = true;   //false
	char myChar = 't';   // apena 1 caracter
	char myArray[11] = "0123456789"; // str / tem q colocar sempre 1 numero a mais na hora de declarar / valor ja fica definido

	std::string myStr = "Teste ";  std::cout << myStr << "\n"; //parte da biblioteca <string> 
	myStr = "Tbm posso trocar ";   std::cout << myStr << "\n";
	myStr += "e/ou adicionar ";    std::cout << myStr << "\n";
	size_t mySizeT = 0; // tamanho para coisas '???'

return 0;
}
