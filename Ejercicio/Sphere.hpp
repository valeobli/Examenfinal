#ifndef SPHERE_HPP
#define SPHERE_HPP
#include <iostream>

#include "Contenedor.hpp"

class Sphere : public Contenedor {
public:
    // Constructor
    Sphere(std::string mat, double radio);

    // Implementación de obtenerVolumen()
    virtual double obtenerVolumen() const override;

    // Método para mostrar detalles
    virtual void mostrarDetalles() override;

private:
    double radio;
};

#endif // SPHERE_HPP
