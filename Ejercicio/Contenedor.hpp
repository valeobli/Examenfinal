#ifndef CONTENEDOR_HPP
#define CONTENEDOR_HPP
#include <iostream>

#include <string>
// Esta clase es la base para todos los tipos de contenedores. 
// Define los métodos generales que cualquier tipo de contenedor debe tener.

class Contenedor {
public:
    // Constructor
    Contenedor(std::string mat);

    // Destructor
    virtual ~Contenedor();

    virtual double obtenerVolumen() const = 0; 
    virtual void mostrarDetalles() = 0;

//La abstracción se refiere a que en la clase Contenedor solo decimos qué es lo que deben hacer las clases derivadas 
//(como Rectangulo, Cylinder, etc.), pero no damos los detalles de cómo lo hacen. Esto lo logramos con métodos "vacíos"
// llamados métodos virtuales puros, como mostrarDetalles() y obtenerVolumen(), que no tienen implementación en Contenedor
//. Las clases derivadas luego definen exactamente qué hacen esos métodos.

    virtual double compararVolumen(const Contenedor& otro);
    virtual bool operator>(Contenedor& otro);



protected:
    std::string material; // Material del contenedor
};

//El encapsulamiento significa que protegemos los datos de las clases. Por ejemplo, en lugar de que cualquier persona
// cambie directamente el material de un objeto como la esfera o el cono, lo hacemos de forma controlada, 
//usando funciones. Así, el material está "escondido" dentro de la clase y solo se puede modificar a través de
// métodos que permiten un acceso seguro

#endif

