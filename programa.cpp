#include <iostream>
#include <string>
using namespace std;

void fibonacci() {
    int n;
    std::cout << "Introducir numeros a generar:" << std::endl;
    std::cin >> n;

    int a = 0;
    int b = 1;
    
    for (int i = 0; i < n; i++)
    {
        std::cout << a;
        if (i < n - 1) {
            std::cout << ", ";
        }
        
        int siguiente = a + b; 
        a = b;
        b = siguiente;
    }
    std::cout << std::endl;
}


void operaciones_basicas() {
    int numero1,numero2;
    std::cout << "Introducir el numero1: ";
    std::cin >> numero1;

    std::cout << "Introducir el numero2: ";
    std::cin >> numero2;

    std::cout << "La suma es: " << (numero1 + numero2) << std::endl;
    std::cout << "La resta es: " << (numero1 - numero2) << std::endl;
    std::cout << "La multiplicacion es: " << (numero1 * numero2) << std::endl;
    if (numero2 != 0)
    {
        std::cout << "La division es: " << (numero1 / numero2) << std::endl;
        std::cout << "El modulo es: " << (numero1 % numero2) << std::endl;
    }
    else
    {
        std::cout << "No se puede dividir entre cero." << std::endl;
    }

}


void menu() {
    std::cout << "Seleccione una opcion:" << std::endl;
    std::cout << "1. Operaciones basicas" << std::endl;
    std::cout << "2. Fibonacii" << std::endl;
}

int main()
{
    char opcion = ' ';
    menu();
    std::cin >> opcion;
    switch (opcion)
    {
    case '1':
        operaciones_basicas();    
        break;
    case '2':
        fibonacci();
    default:
        break;
    };

    return 0;
}