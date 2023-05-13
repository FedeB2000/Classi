#include <iostream>
using namespace std;
#include "Persona.h"

int main() {
std::cout << "Hello, World!\n";
  // Creating a `Persona` instance with constructor arguments
  Persona p{"Mario Rossi", 30};

  // Copying the `p` instance to another `Persona` instance
  Persona p_copia{p};

  // Printing the details of both `Persona` instances
  p.stampaDettagli();
  cout << "\n\n";
  p_copia.stampaDettagli();

  return 0;
}