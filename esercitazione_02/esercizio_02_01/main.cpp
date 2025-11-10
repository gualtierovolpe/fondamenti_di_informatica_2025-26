#include <iostream>

int main() {

    float a = 0.0f; float b = 0.0f;
    float x = 0.0f;

    // Acquisizione coefficienti
    std::cout << "Inserire i coefficienti a e b di una equazione di primo grado" << std::endl;
    std::cout << "Coefficiente a: ";
    std::cin >> a;
    std::cout << "Coefficiente b: ";
    std::cin >> b;
    
    // Caso degenere
    if (a == 0)
        if (b == 0)
            std::cout << "L'equazione ha infinite soluzioni" << std::endl;
        else 
            std::cout << "L'equazione non ha soluzione" << std::endl;

    // Caso non degenere
    else {
        x = - b / a;
        std::cout << "La soluzione vale x = "<< x << std::endl;
    }
        
    return 0; 
} 
