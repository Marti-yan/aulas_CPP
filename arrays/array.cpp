#include <string>
#include <iostream>

int main(int argc, char **argv){
    int myArray[10];

    for(int i = 0; i < 10; i++){
        myArray[i] = i;
    }
    for(int i = 0; i < 10; i++){
        std::cout << myArray[i] << "\n";
    }
return 0;}