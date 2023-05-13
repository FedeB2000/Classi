#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
  private:
    string nome;
    int eta;
  
  public:
    // Costruttore
    Persona(string n, int e) {}
    // Costruttore di copia
     Persona(const Persona& p) {}
     // Distruttore
    ~Persona() {}
    // Define a function called Getage that returns a integer value
    int Getage(){}
    
    // Metodo per stampare i dettagli della persona
    void stampaDettagli() {}
};
#endif