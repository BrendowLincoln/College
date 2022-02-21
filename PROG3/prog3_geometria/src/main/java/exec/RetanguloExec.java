package exec;

import br.edu.femass.model.Retangulo;
import br.edu.femass.model.SegmentoReta;

public class RetanguloExec {
    public static void main(String[] args) {
        Retangulo r = new Retangulo(
                new SegmentoReta(0.0, 0.0, 2.0, 2.0), //lado
                new SegmentoReta(0.0, 0.0, 4.0, 4.0) //altura
        );

        System.out.println(r.getArea());
        System.out.println(r.getPerimetro());
    }
}
