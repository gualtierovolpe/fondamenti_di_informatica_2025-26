#include <iostream>

int main ()
{
	int n = 0;
	int precedente = 0, successivo = 0;

	// Acquisizione di un numero intero
	std::cout << "Inserire un numero intero: ";
	std::cin >> n;

	// Calcolo del numero precedente
	precedente = --n;

	// Calcolo del numero successivo
	successivo = ++(++n);

	// Stampa a video del risultato
	std::cout << "Il numero precedente e': " << precedente << std::endl;
	std::cout << "Il numero successivo e': " << successivo << std::endl;

	return 0;
}

