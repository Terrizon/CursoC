#include <iostream>

bool esPrimo(int n) {
    if (n <= 1) return false;  
    if (n == 2) return true;   
    if (n % 2 == 0) return false; 

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}


int main()
{
    int number;
	std::cout << "Introduzca el numero: ";
	std::cin >> number;
    if(esPrimo(number)){
        std::cout << "Numero Primo \n";
    } else{
        std::cout << "Numero No Primo \n";
    };
    return 0;
}

