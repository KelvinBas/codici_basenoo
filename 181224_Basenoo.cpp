/*
VERIFICA TPSIT 18/12/2024
Basenoo Kelvin
3°CA
*/
#include<iostream>
#include <string>
using namespace std;


void SommaProdotto(int a,int b,int& somma, int& prodotto){
	prodotto= a*b;
	somma=a+b;
}
string invertiCifre(int numero) {
	int inverso=0;
	while(numero>0){
		int cifra= numero%10;
		inverso=inverso*10+cifra;
		numero=numero\10;
		
	}
	return inverso;
}
void MenoSign(int prodotto,int somma) {
	cout << "Cifra meno significativa del prodotto:" << prodotto %10<<endl;
	cout << "Cifra meno significativa della somma:" << somma %10<<endl;
	}
	int main() {
		int a,b;
		cout<<"Inserisci il primo numero: ";
		cin >> a;
		cout <<"Inserisci il seconodo numero: ";
		cin >> b;
		
		int Nmin;
		if(a<b) {
			Nmin=a;
		} else if (a>b) {
			Nmin=b;
		} else {
			cout << "I numeri sono uguali" << endl;
		}
		
		
		int NumNimInvertito = invertiCifra(NumMin);
		int prodotto,somma;
		
		SommaProdotto(a,b,prodotto,somma);
		
		cout << "Numero più piccolo: " << NumMin << endl;
		cout << "Cifre invertite del numero più piccolo: " << inverso << endl;
		
		MenoSign(prodotto,somma);
		
		return 0;
	}
}


