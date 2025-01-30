#include "Contenedor.hpp"
#include <iostream>


// Constructor
Contenedor::Contenedor(std::string mat) : material(mat) {}

// Destructor
Contenedor::~Contenedor() {
    
}

// Método que compara el volumen de dos contenedores
double Contenedor::compararVolumen(const Contenedor& otro) {
   
    return this->obtenerVolumen() - otro.obtenerVolumen();
}

// Sobrecarga del operador ">"
bool Contenedor::operator>(Contenedor& otro) {
  
    return this->obtenerVolumen() > otro.obtenerVolumen();
}
