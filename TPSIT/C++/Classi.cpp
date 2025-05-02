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
};

int main() {
    // Creazione del primo giocatore, Cristiano Ronaldo
    Calciatore calciatore1("Cristiano Ronaldo", "Al Nassr", 38, 15000000, 7);
    
    // Creazione del secondo giocatore, Lionel Messi
    Calciatore calciatore2("Lionel Messi", "MIAMI", 37, 20000000, 10);

    // Creazione del terzo giocatore, Neymar
    Calciatore calciatore3("Neymar", "Al Hilal", 31, 25000000, 11);


    // Stampa dei dettagli del primo giocatore
    cout << "Giocatore 1: " << endl;
    cout << "Nome: " << calciatore1.getNome() << endl;
    cout << "Squadra: " << calciatore1.getSquadra() << endl;
    cout << "Età: " << calciatore1.getEta() << endl;
    cout << "Stipendio: " << calciatore1.getStipendio() << endl;
    cout << "Numero di maglia: " << calciatore1.getNumeroMaglia() << endl;
    cout << endl;

    // Stampa dei dettagli del secondo giocatore
    cout << "Giocatore 2: " << endl;
    cout << "Nome: " << calciatore2.getNome() << endl;
    cout << "Squadra: " << calciatore2.getSquadra() << endl;
    cout << "Età: " << calciatore2.getEta() << endl;
    cout << "Stipendio: " << calciatore2.getStipendio() << endl;
    cout << "Numero di maglia: " << calciatore2.getNumeroMaglia() << endl;
    cout << endl;

    // Stampa dei dettagli del terzo giocatore
    cout << "Giocatore 3: " << endl;
    cout << "Nome: " << calciatore3.getNome() << endl;
    cout << "Squadra: " << calciatore3.getSquadra() << endl;
    cout << "Età: " << calciatore3.getEta() << endl;
    cout << "Stipendio: " << calciatore3.getStipendio() << endl;
    cout << "Numero di maglia: " << calciatore3.getNumeroMaglia() << endl;

    return 0;
}
