#ifndef TRIANGULO_H
#define TRIANGULO_H


class Triangulo
{
    public:
        Triangulo();//metodo constructor
        virtual ~Triangulo();//metodo destructor

        //Se definen los metodos publicos:
        float perimetro();//perimetro() de tipo float
        float area();//area() de tipo float
        float altura();//altura() de tipo float

        //Se definen los metodos Setters y Getters del atributo lado
        void setLado(float val);
        float getLado();
    protected:

    private:
        float lado;
};

#endif // TRIANGULO_H
