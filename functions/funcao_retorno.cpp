#include <iostream>

int Mysum(int x, int y){
    return x + y;
}

int main (int argc, char **argv){

    int x = 10;
    int y = 20;

    int z = Mysum(x,y);
    std::cout << z;


return 0;
}