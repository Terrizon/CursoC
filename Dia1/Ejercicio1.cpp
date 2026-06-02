#include <iostream>

int main()
{
    int number;
    int div_2;
	std::cout << "Introduzca el numero: ";
	std::cin >> number;
    div_2 = number%2;
    if(div_2 == 0){
        std::cout << "Numero Par \n";
    } else{
        std::cout << "Numero Impar \n";
    };
    return 0;
}