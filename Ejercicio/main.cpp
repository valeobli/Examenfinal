#include <iostream>
#include <list>
#include "Cono.hpp"
#include "Rectangulo.hpp"
#include "Cylinder.hpp"
#include "Sphere.hpp"
#include "Contenedor.hpp"

// Función para calcular el volumen total
double calcularVolumenTotal(const std::list<Contenedor*>& contenedores) {
    double total = 0;
    for (Contenedor* contenedor : contenedores) {
        total += contenedor->obtenerVolumen();  // Llamada al método polimórfico
    }
    return total;
}

int main() {

//La herencia se refiere a que las clases más específicas como Rectangulo, Cylinder, Sphere, 
// heredan características de una clase más general, que en este caso es Contenedor. 
//Esto quiere decir que todas las formas (como esferas, conos, cilindros) tienen algo en común porque todas son contenedores. 
//Usamos la clase Contenedor como base para las demás, y cada forma añade sus propios detalles.
   
    std::list<Contenedor*> contenedores = {
        new Sphere("Acero", 5),
        new Cono("Fibra de vidrio", 9, 3),
        new Rectangulo("Acero", 3, 3, 5),
        new Cylinder("Fibra de vidrio", 6, 5),
        new Sphere("Fibra de vidrio", 6),
        new Cono("Acero", 1, 2)
        new Rectangulo("Fibra de vidrio", 1, 2, 3),
        new Cylinder("Acero", 4, 5),
    
    };

//El polimorfismo es cuando usamos un mismo nombre de función, pero se comporta de manera diferente según el tipo de objeto que esté usando esa función.
// En el código, aunque estamos usando un puntero de tipo Contenedor*, este puntero puede apuntar a diferentes tipos de objetos, y cuando llamamos a mostrarDetalles() o obtenerVolumen(), 
//cada forma (esfera, cono, rectángulo) hace lo suyo, aunque el puntero sea de tipo Contenedor*.

    // Mostrar detalles de cada contenedor
    for (Contenedor* cont : contenedores) {
        cont->mostrarDetalles();
    }

    // Calcular el volumen total
    double volumenTotal = calcularVolumenTotal(contenedores);
    std::cout << "El volumen total de los contenedores es: " << volumenTotal << " unidades cúbicas" << std::endl;

    // Limpiar 
    for (Contenedor* cont : contenedores) {
        delete cont;
    }

    return 0;
}
