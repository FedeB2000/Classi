#include <iostream>
using namespace std;
#include "Persona.h"

  
  
    // Costruttore
    Persona::Persona(string n, int e) {
      nome = n;
      eta = e;
    }
    // Costruttore di copia
     Persona::Persona(const Persona& p) {
        nome = p.nome;
        eta = p.eta;
    }
     // Distruttore
    Persona::~Persona() {
      std::cout << "L'oggetto sta per essere distrutto" << std::endl;
    }
    // Metodo per stampare i dettagli della persona
    void Persona::stampaDettagli() {
      cout << "Nome: " << nome << endl;
      cout << "Età: " << eta << endl;
    }

 // This function returns the age of a Persona object.   
    int Persona::Getage() {
    return eta;
}

