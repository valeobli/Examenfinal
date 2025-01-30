#ifndef CONO_HPP
#define CONO_HPP

#include <string>
#include "Contenedor.hpp"




class Cono : public Contenedor {
public:
    Cono(std::string mat, double rad, double alt); 


    double obtenerVolumen() const;

    void mostrarDetalles();
    
private:
    double radio;
    double altura;
};

#endif
