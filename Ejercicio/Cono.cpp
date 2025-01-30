#include "Cono.hpp"
#include <iostream>
#include <cmath>

Cono::Cono(std::string mat, double rad, double alt) : Contenedor(mat), radio(rad), altura(alt) {}

double Cono::obtenerVolumen() const {
    return (M_PI * radio * radio * altura) / 3.0;
}

void Cono::mostrarDetalles() {
    std::cout << "Cono de material " << material << " con radio " << radio << " y altura " << altura << std::endl;
}
