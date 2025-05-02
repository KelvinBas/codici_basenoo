/* Autore: Kelvin basenoo 
email: basenoo13363130@luigidellerba.edu.it
Traccia: Scrivere un programma che prenda in input un numero intero e restituisca "true" se è un numero primo, altrimenti restituisca l'elenco dei numeri per cui quello inserito è divisibile.
VERIFICA DI TPSIT 30/10/2024
*/
//dichiarazione librerie
#include <iostream> 
#include <cmath>   

using namespace std;

// per controllare se un numero è primo
bool Nprimi(int n) {
    if (n <= 1) 
        return false;

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0)
            return false; // Non è primo
    }
    return true; // È primo
}

// per trovare e stampare i divisori del numero
void StampaDivisori(int n) {
    cout << "I divisori di " << n << " sono: ";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0)
            cout << i << " "; // Stampa il divisore
    }
    cout << endl; // Aggiungi una nuova linea alla fine
}

int main() {
    double numero; // Dichiarazione variabile numero

    while (true) { // Mi chiederà il numero finchè non sarà valido
        cout << "Inserisci un numero intero: "; // chiede il numero da inserire
        cin >> numero; // Lettura dell'input

        // Controllo se il numero è un intero
        if (floor(numero) != numero) { // Se il numero non è intero
            cout << "Inserisci un numero intero." << endl; // Mi dice di inserire un numero intero
        } else {
            int numInt = static_cast<int>(numero); // lo uso per convertire la variabile da floor a int
            if (numInt < 0) { // Controllo se il numero è negativo
                cout << "I numeri negativi non possono essere primi." << endl; // Mi dice di inserire un numero positivo
            } else {
                if (Nprimi(numInt)) { // Controllo se il numero è primo
                    cout << "Il numero è primo" << endl; 
                } else {
                    StampaDivisori(numInt); // Se non è primo, stampa i divisori
                }
            }
            break; // Uscita dal ciclo se l'input è valido
        }
    }

    return 0; // Fine del programma
}





