/* Un algoritmo che implementi una calcolatrice con almeno sei diverse operazioni matematiche.
Che utilizza 3 costrutti diversi.
Autore: Basenoo Kelvin
Email: basenoo13363130@luigidellerba.edu.it
*/
#include <stdio.h>
#include <math.h> // Per le funzioni matematiche

int main() {
    int scelta;
    double num1, num2, risultato;

    do {
        // Menu delle operazioni
        printf("Seleziona un'operazione:\n");
        printf("1. Somma\n");
        printf("2. Sottrazione\n");
        printf("3. Moltiplicazione\n");
        printf("4. Divisione\n");
        printf("5. Potenza\n");
        printf("6. Radice quadrata\n");
        printf("7. Esci\n");
        printf("Inserisci la tua scelta: ");
        scanf("%d", &scelta);

        // Controllo della scelta dell'utente
        if (scelta >= 1 && scelta <= 6) {
            // Richiesta dei numeri all'utente
            if (scelta == 6) {
                printf("Inserisci un numero: ");
                scanf("%lf", &num1); // Solo un numero per la radice quadrata
            } else {
                printf("Inserisci il primo numero: ");
                scanf("%lf", &num1);
                printf("Inserisci il secondo numero: ");
                scanf("%lf", &num2);
            }

            // Esecuzione dell'operazione scelta
            switch (scelta) {
                case 1:
                    risultato = num1 + num2;
                    printf("Risultato: %.2lf\n", risultato);
                    break;
                case 2:
                    risultato = num1 - num2;
                    printf("Risultato: %.2lf\n", risultato);
                    break;
                case 3:
                    risultato = num1 * num2;
                    printf("Risultato: %.2lf\n", risultato);
                    break;
                case 4:
                    if (num2 != 0) {
                        risultato = num1 / num2;
                        printf("Risultato: %.2lf\n", risultato);
                    } else {
                        printf("Errore: Divisione per zero non permessa.\n");
                    }
                    break;
                case 5:
                    risultato = pow(num1, num2);
                    printf("Risultato: %.2lf\n", risultato);
                    break;
                case 6:
                    risultato = sqrt(num1);
                    printf("Risultato: %.2lf\n", risultato);
                    break;
            }
        } else if (scelta != 7) {
            printf("Scelta non valida. Riprova.\n");
        }

    } while (scelta != 7); // Continua fino a quando l'utente non sceglie di uscire

    printf("Grazie per aver usato la calcolatrice!\n");
    return 0; // Fine del programma
}
