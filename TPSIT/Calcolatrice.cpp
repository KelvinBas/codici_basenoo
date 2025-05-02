/* Un algoritmo che implementi una calcolatrice con almeno sei diverse operazioni matematiche.
Che utilizza 3 costrutti diversi.
Autore: Basenoo Kelvin
Email: basenoo13363130@luigidellerba.edu.it
*/
//dichiarare la libreria
#include <iostream>
#include <cmath> // per la funzione sqrt()
using namespace std;
//funzioni per le varie operazioni matematiche 
double somma(double a, double b) {
	return a+b;
}

double sottrazione(double a,double b) {
	return a-b;
}

double moltiplicazione(double a, double b) {
	return a*b;
}

double divisione(double a, double b) {
	if (b !=0) {
		return a/b;
	} else {
		cout << "Non si puo dividere per zero!" << endl;
		return 0;
	}
}
double potenza(double base, double esponente) {
	double risultato = 1;
	for(int i=0; i< esponente; i++) {
		risultato*=base;
	}
	return risultato;
}
double radice(double a) {
	if( a>=0) {
		return sqrt(a); //utilizzo la funzione sqrt per la radice quadrata
	} else {
		cout << "Non è possibile calcolare la radice quadrata di un numero negativo!" << endl;
		return 0;
	}
}
int main() {
	double num1, num2;
	int scelta;
	bool continua = true;
	//ciclo principale della calcolatrice
	while (continua) {
	//menu di selezione dell'operazione
		cout << "Seleziona un operazione: " << endl;
		cout << "1. Somma" << endl;
		cout << "2. Sottrazione" << endl;
		cout << "3. Moltiplicazione" << endl;
		cout << "4. Divisione" << endl;
		cout << "5. Potenza" << endl;
		cout << "6. Radice quadrata" << endl;
		cout << "7. Esci" << endl;
		cout << "Inserisci la tua scelta: ";
		cin >> scelta;

    if (scelta >=1 && scelta <=5) {
    	//input dei numeri delle operazioni
    	cout << "Inserisc il primo numero: ";
    	cin >> num1;
    	cout << "Inserisci il secondo numero: ";
    	cin >> num2;
    	} else if (scelta == 6) {
    		// Input del numero per la radice quadrata
    		cout << "Inserisci il numero: ";
    		cin >> num1;
		}
		
	// Switch per selezionare l'operazione 

 switch(scelta) {
 	case 1:
 		cout<<"risultato: " << somma(num1,num2) << endl;
 		break;
 	case 2:
 		cout<<"risultato: " << sottrazione(num1,num2) << endl;
 			break;
 	case 3:
 		cout<<"risultato: " << moltiplicazione(num1,num2) << endl;
 			break;
	case 4:
 		cout<<"risultato: " << divisione(num1,num2) << endl;
 			break;
	case 5: 
		cout << "Risultato: " << potenza(num1, static_cast<int>(num2)) << endl;
		break;
    case 6:
 		cout << "risultato: " << radice(num1) << endl;
 			break;
 	case 7:
 		continua = false;
 		break;
 	default:
 		cout << "scelta non valida, riprova. \n";
 		break;
	}
	cout << endl;
}
cout << "Calcolatrice terminata." << endl;
return 0;
}