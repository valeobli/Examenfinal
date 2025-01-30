#include "Rectangulo.hpp"
#include <iostream>


Rectangulo::Rectangulo(std::string mat, double largo, double ancho, double alto)
    : Contenedor(mat), largo(largo), ancho(ancho), alto(alto) {}

double Rectangulo::obtenerVolumen() const {
    // Fórmula del volumen del rectángulo: largo * ancho * alto
    return largo * ancho * alto;
}

void Rectangulo::mostrarDetalles() {
    std::cout << "Rectángulo de material " << material << " con dimensiones " << largo << "x" << ancho << "x" << alto << std::endl;
}
