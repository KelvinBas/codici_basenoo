#include <iostream>
#include <string>
using namespace std;

class Calciatore {
  private:
    string nome;
    string squadra;
    int eta;
    double stipendio;     
    int numeroMaglia;

  public:
    // Costruttore
    Calciatore(string n, string s, int e, double st, int nm) {
        nome = n;
        squadra = s;
        eta = e;
        stipendio = st;
        numeroMaglia = nm;
    }

    // Metodi get
    string getNome() { return nome; }
    string getSquadra() { return squadra; }
    int getEta() { return eta; }
    double getStipendio() { return stipendio; }
    int getNumeroMaglia() { return numeroMaglia; }

    // Metodi set
    void setNome(string n) { nome = n; }
    void setSquadra(string s) { squadra = s; }
    void setEta(int e) { eta = e; }
    void setStipendio(double st) { stipendio = st; }
    void setNumeroMaglia(int nm) { numeroMaglia = nm; }

    // Funzione per aggiornare stipendio
    void aggiornaStipendio(double aumento) {
        stipendio += aumento;
    }

    // Funzione per cambiare squadra
    void cambiaSquadra(string nuovaSquadra) {
        squadra = nuovaSquadra;
    }

    // Funzione per verificare se il calciatore è giovane (meno di 30 anni)
    bool isGiovane() {
        return eta < 30;
    }
};

void stampaDettagliCalciatore(Calciatore calciatore) {
    cout << "Nome: " << calciatore.getNome() << endl;
    cout << "Squadra: " << calciatore.getSquadra() << endl;
    cout << "Età: " << calciatore.getEta() << endl;
    cout << "Stipendio: " << calciatore.getStipendio() << endl;
    cout << "Numero di maglia: " << calciatore.getNumeroMaglia() << endl;
    cout << endl;
}

int main() {
    // Creazione dei calciatori
    Calciatore calciatore1("Cristiano Ronaldo", "Al Nassr", 38, 15000000, 7);
    Calciatore calciatore2("Lionel Messi", "MIAMI", 37, 20000000, 10);
    Calciatore calciatore3("Neymar", "Al Hilal", 31, 25000000, 11);

    // Stampa dettagli calciatori
    cout << "Dettagli calciatore 1:" << endl;
    stampaDettagliCalciatore(calciatore1);
    
    cout << "Dettagli calciatore 2:" << endl;
    stampaDettagliCalciatore(calciatore2);

    cout << "Dettagli calciatore 3:" << endl;
    stampaDettagliCalciatore(calciatore3);

    // Modifica stipendio e squadra
    cout << "Aggiornamento stipendio e squadra per calciatore 1:" << endl;
    calciatore1.aggiornaStipendio(5000000); // aumento stipendio di 5 milioni
    calciatore1.cambiaSquadra("Manchester United");
    stampaDettagliCalciatore(calciatore1);

    // Verifica se un calciatore è giovane
    cout << "Calciatore 2 è giovane? " << (calciatore2.isGiovane() ? "Sì" : "No") << endl;

    return 0;
}
