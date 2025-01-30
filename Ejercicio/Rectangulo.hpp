#ifndef RECTANGULO_HPP
#define RECTANGULO_HPP
#include <iostream>


#include "Contenedor.hpp"

class Rectangulo : public Contenedor {
public:
    // Constructor
    Rectangulo(std::string mat, double largo, double ancho, double alto);

    // Implementación de obtenerVolumen()
    virtual double obtenerVolumen() const override;

    // Método para mostrar detalles
    virtual void mostrarDetalles() override;

private:
    double largo;
    double ancho;
    double alto;
};

#endif // RECTANGULO_HPP

//Cada clase derivada (como Rectangulo, Cylinder, etc.) implementa sus propias 
//versiones de los métodos mostrarDetalles() y obtenerVolumen(). Aquí es donde se realiza el polimorfismo:
// el  Contenedor puede apuntar a un objeto de cualquier clase derivada y llamar al método correcto.