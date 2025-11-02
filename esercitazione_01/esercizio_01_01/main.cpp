#include <iostream>

int main()
{
    int cateto1 = 0, cateto2 = 0, quadrato_ipotenusa = 0;

    // Acqusizione dei valori dei cateti
    std::cout << "Inserisci la lunghezza di un cateto: ";
    std::cin >> cateto1;
    std::cout << "Inserisci la lunghezza del secondo cateto: ";
    std::cin >> cateto2;

    // Calcolo del quadrato del'ipotenusa
    quadrato_ipotenusa = cateto1 * cateto1 + cateto2 * cateto2;

    // Stampa a video del risultato
    std::cout << "Il quadrato dell'ipotenusa vale " << quadrato_ipotenusa << std::endl;
    
    return 0;
}
