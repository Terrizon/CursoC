#include <iostream>

int main()
{
    int First_number;
	std::cout << "Introduzca el Primer numero: ";
	std::cin >> First_number;

    int Introduced_Number;

	do
	{
        std::cout << "Introduzca un numero: ";
        std::cin >> Introduced_Number;
        if(Introduced_Number > First_number){
            std::cout << "El Numero es mayor \n";
        } 
        else if(Introduced_Number < First_number){
            std::cout << "El Numero es menor \n";
        }
        else{
            std::cout << "El Numero es igual \n"; 
        };        
	} while (Introduced_Number != First_number);

    return 0;
}