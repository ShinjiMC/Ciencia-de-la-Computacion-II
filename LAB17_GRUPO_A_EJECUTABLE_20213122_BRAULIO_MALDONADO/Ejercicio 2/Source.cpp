#include "aplication.h"

int main() {
    lista<int>datos1=lista<int>(2);
    lista<float>datos2 = lista<float>(2.198);
    lista<double>datos3 = lista<double>(2.192383);
    lista<char>datos4 = lista<char>('x');
    lista<std::string>datos5 = lista<std::string>("inicio");
    std::cout << "LISTA ENTEROS: " << std::endl;
    Aplication(datos1);
    std::cout << std::endl;
    std::cout << "LISTA FLOAT: " << std::endl;
    Aplication(datos2);
    std::cout << std::endl;
    std::cout << "LISTA DOUBLE: " << std::endl;
    Aplication(datos3);
    std::cout << std::endl;
    std::cout << "LISTA CHAR: " << std::endl;
    Aplication(datos4);
    std::cout << std::endl;
    std::cout << "LISTA STRING: " << std::endl;
    Aplication(datos5);
    return 0;
}