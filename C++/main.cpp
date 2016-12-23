#include <iostream>
//Se incluye la clase Triangulo para despues llamar a sus metodos
#include "Triangulo.h"

using namespace std;

int main()
{
    //Se crea un objeto de la clase Pasar (Instanciaciación)
    Triangulo* obj = new Triangulo();

    float l;//se define la variable l de tipo float
    //se pide el lado del triangulo
    cout << "Digite lado del triangulo equilatero: " << endl;
    cin >> l;//se guarda el lado en la variable l
    obj->setLado(l);//se encapsula la variable l

    //se muestra el perimetro
    cout << "El perimetro es: " << obj->perimetro() << endl;
    //se muestra el area
    cout << "El area es: " << obj->area() << endl;
    //se muestra la altura
    cout << "La altura es: " << obj->altura() << endl;
    return 0;
}
