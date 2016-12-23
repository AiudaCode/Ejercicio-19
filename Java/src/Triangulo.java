
import static java.lang.Math.pow;
import static java.lang.Math.sqrt;

public class Triangulo
{
    public Triangulo()
    {
        //se le asigna 0 a la variable lado en el constructor de la clase
        //Triangulo
        lado = 0;
    }
    //Se define el atributo "lado" de tipo double
    private double lado;
    
    //implementacion metodo perimetro()
    public double perimetro()
    {
        //el perimetro de un triangulo es multiplicar su lado 3 veces
        return 3 * lado;
    }

    //existe un metodo que puede calcular la raiz cuadrada de un numero, esta en el paquete
    //Math de java, se llama sqrt() solo se debe asignar como parametro el numero a calcular
    //dentro del metodo.

    //existe otro metodo para elevar numeros, en este caso queremos elevar lado a la 2.
    //utilizaremos el metodo pow(), del paquete Math de java, solo se debe ingresar como
    //parametro el numero que se va a elevar seguido de una coma con el numero al que se
    //elevara. La función pow retorna el resultado de lado^2.
    public double area()
    {
        //para calcular el area se debe utilizar la siguiente formula:
        // √3/4 * lado^2 (raiz cuadrada de 3 sobre 4, por el lado elevado a la 2).
        return sqrt(3) / 4 * pow(lado, 2);
    }

    //Implementacion del metodo altura()
    public double altura()
    {
        //para calcular la altura se debe sacar la raiz de 3 por el lado entre 2
        // √3*lado/2
        return sqrt(3 * lado) / 2;
    }

    //Se implemetan los metodos Setters y Getters del atributo  lado
    public void setLado(double val)
    {
        //a lado se le asigna val
        lado = val;
    }

    public double getLado()
    {
        //se retorna lado
        return lado;
    }
}
