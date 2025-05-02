/*
Creare un software che operi come una calcolatrice scientifica.
Inserire, oltre le 4 operazioni fondamentali, almeno 6 funzioni matematiche complesse (ad esempio, logaritmi, esponenziali, funzioni trigonometriche). Ogni ulteriore funzione aggiuntiva implementata correttamente sarà considerata voto bonus.
Nella realizzazione del compito, utilizzare almeno uno switch, un while e un for.
Per realizzare il codice, studiare la libreria cmath.
Il codice deve essere fatto rispettando tutte le linee guida discusse finora.
Nel main va scritto il minor numero di istruzioni possibile.

Basenoo Kelvin
3°CAI
email: basenoo13363130@luigidellerba.edu.it
*/
#include <iostream>
#include <cmath> // Libreria per funzioni matematiche

using namespace std;

// Funzioni della calcolatrice 
void somma() { // Funzione per sommare N numeri
    int n;
    double numero, risultato = 0;
    cout << "Quanti numeri vuoi sommare? ";
    cin >> n; // Input del numero di operandi
    cout << "Inserisci " << n << " numeri: ";
    for (int i = 0; i < n; i++) { // Ciclo per leggere e sommare i numeri
        cin >> numero;
        risultato += numero;
    }
    cout << "Risultato: " << risultato << endl; // Stampa del risultato
}

void sottrazione() { // Funzione per sottrarre N numeri
    int n;
    double numero, risultato;
    cout << "Quanti numeri vuoi sottrarre? ";
    cin >> n; // Input del numero di operandi
    cout << "Inserisci il primo numero: ";
    cin >> risultato; // Il primo numero è il punto di partenza
    for (int i = 1; i < n; i++) { // Ciclo per leggere e sottrarre i numeri
        cout << "Inserisci il numero successivo: ";
        cin >> numero;
        risultato -= numero;
    }
    cout << "Risultato: " << risultato << endl; // Stampa del risultato
}

void moltiplicazione() { // Funzione per moltiplicare N numeri
    int n;
    double numero, risultato = 1;
    cout << "Quanti numeri vuoi moltiplicare? ";
    cin >> n; // Input del numero di operandi
    cout << "Inserisci " << n << " numeri: ";
    for (int i = 0; i < n; i++) { // Ciclo per leggere e moltiplicare i numeri
        cin >> numero;
        risultato *= numero;
    }
    cout << "Risultato: " << risultato << endl; // Stampa del risultato
}

void divisione() { // Funzione per dividere N numeri
    int n;
    double numero, risultato;
    cout << "Quanti numeri vuoi dividere? ";
    cin >> n; // Input del numero di operandi
    cout << "Inserisci il primo numero: ";
    cin >> risultato; // Il primo numero è il punto di partenza
    for (int i = 1; i < n; i++) { // Ciclo per leggere e dividere i numeri
        cout << "Inserisci il numero successivo: ";
        cin >> numero;
        if (numero != 0) { // Controllo per evitare la divisione per zero
            risultato /= numero;
        } else {
            cout << "Errore: divisione per zero! Operazione annullata." << endl;
            return;
        }
    }
    cout << "Risultato: " << risultato << endl; // Stampa del risultato
}

void potenza() { // Funzione per calcolare la potenza
    double base, esponente;
    cout << "Inserisci base ed esponente: ";
    cin >> base >> esponente; // Input della base e dell'esponente
    cout << "Risultato: " << pow(base, esponente) << endl; // Stampa del risultato
}

void radiceQuadrata() { // Funzione per calcolare la radice quadrata
    double num;
    cout << "Inserisci un numero: ";
    cin >> num; // Input del numero
    if (num >= 0) { // Controllo per numeri non negativi
        cout << "Risultato: " << sqrt(num) << endl; // Stampa del risultato
    } else {
        cout << "Errore: numero negativo!" << endl; // Messaggio di errore
    }
}

void logaritmoBase10() { // Funzione per calcolare il logaritmo base 10
    double num;
    cout << "Inserisci un numero: ";
    cin >> num; // Input del numero
    if (num > 0) { // Controllo per numeri positivi
        cout << "Risultato: " << log10(num) << endl; // Stampa del risultato
    } else {
        cout << "Errore: numero non positivo!" << endl; // Messaggio di errore
    }
}

void logaritmoNaturale() { // Funzione per calcolare il logaritmo naturale
    double num;
    cout << "Inserisci un numero: ";
    cin >> num; // Input del numero
    if (num > 0) { // Controllo per numeri positivi
        cout << "Risultato: " << log(num) << endl; // Stampa del risultato
    } else {
        cout << "Errore: numero non positivo!" << endl; // Messaggio di errore
    }
}

void seno() { // Funzione per calcolare il seno
    double angolo;
    cout << "Inserisci un angolo (in radianti): ";
    cin >> angolo; // Input dell'angolo
    cout << "Risultato: " << sin(angolo) << endl; // Stampa del risultato
}

void coseno() { // Funzione per calcolare il coseno
    double angolo;
    cout << "Inserisci un angolo (in radianti): ";
    cin >> angolo; // Input dell'angolo
    cout << "Risultato: " << cos(angolo) << endl; // Stampa del risultato
}

void tangente() { // Funzione per calcolare la tangente
    double angolo;
    cout << "Inserisci un angolo (in radianti): ";
    cin >> angolo; // Input dell'angolo
    cout << "Risultato: " << tan(angolo) << endl; // Stampa del risultato
}

// Funzione per mostrare il menu
void mostraMenu() { // Mostra le opzioni disponibili all'utente
    cout << "\nCalcolatrice Scientifica" << endl;
    cout << "1. Somma" << endl;
    cout << "2. Sottrazione" << endl;
    cout << "3. Moltiplicazione" << endl;
    cout << "4. Divisione" << endl;
    cout << "5. Potenza" << endl;
    cout << "6. Radice quadrata" << endl;
    cout << "7. Logaritmo (base 10)" << endl;
    cout << "8. Logaritmo naturale" << endl;
    cout << "9. Seno" << endl;
    cout << "10. Coseno" << endl;
    cout << "11. Tangente" << endl;
    cout << "12. Uscire" << endl;
    cout << "Scegli un'opzione: "; // Richiesta di input all'utente
}

int main() {
    int scelta; // Variabile per la scelta dell'utente
    bool continua = true; // Variabile per controllare il ciclo principale

    while (continua) { // Ciclo per continuare fino a quando l'utente decide di uscire
        mostraMenu(); // Mostra il menu
        cin >> scelta; // Legge la scelta dell'utente

        switch (scelta) { // Gestisce le operazioni basate sulla scelta
            case 1:
                somma(); // Richiama la funzione somma
                break;
            case 2:
                sottrazione(); // Richiama la funzione sottrazione
                break;
            case 3:
                moltiplicazione(); // Richiama la funzione moltiplicazione
                break;
            case 4:
                divisione(); // Richiama la funzione divisione
                break;
            case 5:
                potenza(); // Richiama la funzione potenza
                break;
            case 6:
                radiceQuadrata(); // Richiama la funzione radice quadrata
                break;
            case 7:
                logaritmoBase10(); // Richiama la funzione logaritmo base 10
                break;
            case 8:
                logaritmoNaturale(); // Richiama la funzione logaritmo naturale
                break;
            case 9:
                seno(); // Richiama la funzione seno
                break;
            case 10:
                coseno(); // Richiama la funzione coseno
                break;
            case 11:
                tangente(); // Richiama la funzione tangente
                break;
            case 12:
                cout << "Uscita dal programma. Arrivederci!" << endl; // Messaggio di uscita
                continua = false; // Termina il ciclo
                break;
            default:
                cout << "Opzione non valida. Riprova." << endl; // Messaggio per scelta non valida
                break;
        }
    }

    return 0; // Termina il programma
}


