/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

// Funzione per stampare gli indirizzi di memoria degli elementi del vettore
void stampa_indirizzi(int *vett, int dimensione) {
    for (int i = 0; i < dimensione; i++) {
        printf("Indirizzo di memoria dell'elemento %d: %p\n", i, (vett + i)); // Stampa dell'indirizzo di memoria
    }
}

// Funzione principale
void main() {
    int vett[9] = {12, 5, 67, 3, 10, 4, 7, 78, 91}; // dichiarazione di un vettore di 9 elementi

    int *puntatore; // dichiarazione di un puntatore

    // Stampa dei valori degli elementi del vettore
    printf("Valori degli elementi del vettore:\n");
    for (int i = 0; i < 9; i++) {
        puntatore = &vett[i]; // assegnamento dell'indirizzo di memoria dell'elemento i-esimo del vettore al puntatore
        printf("Elemento %d: %d\n", i, *puntatore); // stampa del valore dell'elemento i-esimo del vettore
    }

    // Stampa degli indirizzi di memoria
    printf("\nIndirizzi di memoria degli elementi del vettore:\n");
    stampa_indirizzi(vett, 9); // chiamata della funzione per stampare gli indirizzi di memoria
}