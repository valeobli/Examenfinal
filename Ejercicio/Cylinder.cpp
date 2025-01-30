#include "Cylinder.hpp"
#include <cmath>
#include <iostream>


Cylinder::Cylinder(std::string mat, double rad, double alt) : Contenedor(mat), radio(rad), altura(alt) {}

double Cylinder::obtenerVolumen() const {
    // Fórmula del volumen del cilindro: π * r^2 * h
    return M_PI * radio * radio * altura;
}

void Cylinder::mostrarDetalles() {
    std::cout << "Cilindro de material " << material << " con radio " << radio << " y altura " << altura << std::endl;
}

