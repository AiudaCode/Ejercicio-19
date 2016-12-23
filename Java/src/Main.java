
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        //Se crea un objeto de la clase Triangulo (Instanciaciación)
        Triangulo obj = new Triangulo();

        //se pide el lado del triangulo y se guarda en la variable l
        double l = Double.parseDouble(JOptionPane.showInputDialog(null, "Digite lado del triangulo: "));
        obj.setLado(l);//se encapsula la variable "l"
        
        //se muestra el perimetro del triangulo
        JOptionPane.showInputDialog(null, "Perimetro del triangulo: " + obj.perimetro());
        //se muestra el area del triangulo
        JOptionPane.showInputDialog(null, "Area del triangulo: " + obj.area());
        //se muestra la altura del triangulo
        JOptionPane.showInputDialog(null, "Altura del triangulo: " + obj.altura());
    }
}
