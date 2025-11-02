#include <iostream>

int main()
{
    int euro = 0, lire = 0;

    // Costante di conversione
    const int conv = 1936;

    // Acquisizione del valore in Euro
    std::cout << "Inserisci il prezzo in euro: ";
    std::cin >> euro;

    // Calcolo del valore in Lire
    lire = euro * conv;

    // Stampa a video del risultato
    std::cout << "Il prezzo immesso equivale a " << lire << " lire!" << std::endl;
    
    return 0;
}
