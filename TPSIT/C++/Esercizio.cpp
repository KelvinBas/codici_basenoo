

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


//Funzione void per anagrammare la stringa
void anagramma(string& testo, int spostamento){
	int lunghezza = testo.length();


//Controlla se la stringa è vuota o lo spostamento è zero	
	if(lunghezza == 0 || spostamento == 0){
		return;
	}


//Normalizza lo spostamento(evita di spostare piu volte della lunghezza della stringa)
	spostamento=spostamento%lunghezza;


//Gestione di spostamenti negativi per scorrimenti all'indietro
	if(spostamento<0){
		spostamento+=lunghezza;
	}
	
//Sposta le lettere usando std::rotate
	rotate(testo.begin(), testo.end()-spostamento, testo.end());
}

//Funzione per invertire i caratteri della stringa
string invertiCaratteri(const string& testo){
	string testoInverso=testo;//Copia la stringa originale
	reverse(testoInverso.begin(), testoInverso.end());//Inverti la stringa
	return testoInverso;
}


int main(){
	string testo;
	int spostamento;
	
//Input utante
	cout<<"Inserisci una stringa: ";
	getline(cin, testo);//Per leggere stringhe anche con spazi
	cout<< "Inserisci il numero di posizioni di spostamento(positivo o negativo): ";
	cin>> spostamento;
	
//Mostra la stringa invertita(informativa)
	string testoInvertito= invertiCaratteri(testo);
	cout<<"La stringa invertita è: "<< testoInvertito << endl;
	
	string testoAnagramma = testo;
	anagramma (testoAnagramma , spostamento);
	
	cout << "La stringa anagrammata è: "<< testoAnagramma << endl;
	
	return 0;
}
