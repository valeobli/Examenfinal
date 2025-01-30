#ifndef CYLINDER_HPP
#define CYLINDER_HPP
#include <iostream>

#include "Contenedor.hpp"

class Cylinder : public Contenedor {
public:
    // Constructor
    Cylinder(std::string mat, double radio, double altura);

    // Implementación de obtenerVolumen()
    virtual double obtenerVolumen() const override;

    // Método para mostrar detalles
    virtual void mostrarDetalles() override;

private:
    double radio;
    double altura;
};

#endif // CYLINDER_HPP
