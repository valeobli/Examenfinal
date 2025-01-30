#include "Sphere.hpp"
#include <cmath>
#include <iostream>


Sphere::Sphere(std::string mat, double rad) : Contenedor(mat), radio(rad) {}

double Sphere::obtenerVolumen() const {
    // Fórmula del volumen de la esfera: (4/3) * π * r^3
    return (4.0 / 3.0) * M_PI * std::pow(radio, 3);
}

void Sphere::mostrarDetalles() {
    std::cout << "Esfera de material " << material << " con radio " << radio << std::endl;
}
