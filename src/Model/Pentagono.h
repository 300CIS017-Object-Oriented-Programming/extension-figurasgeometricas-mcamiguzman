//
// Created by LENOVO I7 on 11/10/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_PENTAGONO_H
#define EJERCICIO_POLIMORFISMO_PENTAGONO_H
#include "FiguraGeometrica.h"
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::pow;

class Pentagono: public FiguraGeometrica {
private:
    float lado;
    float a;
public:
    Pentagono();
    Pentagono(float lado);
    virtual ~Pentagono() = default;
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};

#endif //EJERCICIO_POLIMORFISMO_PENTAGONO_H
