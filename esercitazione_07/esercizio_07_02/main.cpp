#include <iostream>

// Struttura per rappresentare un punto bidimensionale
struct punto2d {
    double x;
    double y;
};

// Struttura per rappresentare una circonferenza
struct circonferenza {
    double a;
    double b;
    double c;
};

// Calcolo del centro della circonferenza
punto2d centro(circonferenza cfr) {
    punto2d c;
    c.x = -cfr.a/2;
    c.y = -cfr.b/2;
    return c;
}

int main() {
    circonferenza cfr;
    char continua = ' ';

    do {
        // Acquisizione dell'input
        std::cout << "Calcolo del centro di una circonferenza" << std::endl;
        std::cout << "Inserire il coefficiente a: ";
        std::cin >> cfr.a;
        std::cout << "Inserire il coefficiente b: ";
        std::cin >> cfr.b;
        std::cout << "Inserire il coefficiente c: ";
        std::cin >> cfr.c;

        // Chiamata della funzione centro
        punto2d p = centro(cfr);

        // Visualizzazione del risultato
        std::cout << "Il centro e' (" << p.x << "," << p.y << ")." << std::endl;

        do {
            std::cout << "Vuoi continuare (s/n)? ";
            std::cin >> continua;
            if ((continua != 's') && (continua != 'n'))
                    std::cout << "Attenzione: inserire s per continuare, n per uscire" << std::endl;
        } while ((continua != 's') && (continua != 'n'));

    } while (continua == 's');

	return 0;
}
