//
// Created by LENOVO I7 on 11/10/2022.
//
Pentagono::Pentagono() {
    lado = 0;
    nombreFigura = "Pentagono";
}

// Llama al constructor x defecto primero
Pentagono::Circulo(): Circulo() {
    this->radio = radio;
}

void Pentagono::dibujarFigura() {
    cout << nombreFigura;

}

float Circulo::calcularArea() {
    area =(a*lado)/2;
    return area;
}

float Pentagono::calcularPerimetro() {
    perimetro = 5 * lado;
    return perimetro;
}