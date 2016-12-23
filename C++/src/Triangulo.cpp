#include "Triangulo.h"
//se incluira la libreria "math.h" para utilizar el metodo sqrt()
//y poder realizar la raiz cuadrada, ya que es importante para calcular
//el area, perimetro y altura del triangulo.
#include "math.h"

Triangulo::Triangulo()
{
    //se le asigna 0 a "lado" en el constructor
    lado = 0;
}

Triangulo::~Triangulo()
{
    //dtor
}

//implementacion metodo perimetro()
float Triangulo::perimetro()
{
    //el perimetro de un triangulo es multiplicar su lado 3 veces
    return 3 * lado;
}

//existe un metodo que puede calcular la raiz cuadrada de un numero, esta en la clase
//"math.h" y se llama sqrt() solo se debe asignar como parametro el numero a calcular
//dentro del metodo.

//existe otro metodo para elevar numeros, en este caso queremos elevar lado a la 2.
//utilizaremos el metodo pow(), de la clase "math.h", solo se debe ingresar como
//parametro el numero que se va a elevar seguido de una coma con el numero al que se
//elevara. La función pow retorna el resultado de lado^2.
float Triangulo::area()
{
    //para calcular el area se debe utilizar la siguiente formula:
    // √3/4 * lado^2 (raiz cuadrada de 3 sobre 4, por el lado elevado a la 2).
    return sqrt(3) / 4 * pow(lado, 2);
}

//Implementacion del metodo altura()
float Triangulo::altura()
{
    //para calcular la altura se debe sacar la raiz de 3 por el lado entre 2
    // √3*lado/2
    return sqrt(3 * lado) / 2;
}

//Se implemetan los metodos Setters y Getters del atributo  lado
void Triangulo::setLado(float val)
{
    //a lado se le asigna val
    lado = val;
}

float Triangulo::getLado()
{
    //se retorna lado
    return lado;
}
