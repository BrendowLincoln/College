package br.edu.femass.model;

public class Retangulo extends Quadrado {

    private SegmentoReta altura;

    public Retangulo(SegmentoReta lado, SegmentoReta altura) {
        super(lado);
        this.altura = altura;
    }

    public SegmentoReta getAltura() {
        return altura;
    }

    @Override
    public Double getArea() {
        return this.altura.getTamanho() * this.lado.getTamanho();
    }

    public Double getPerimetro() {
        return this.lado.getTamanho() * 2 + this.altura.getTamanho() * 2;
    }
}
