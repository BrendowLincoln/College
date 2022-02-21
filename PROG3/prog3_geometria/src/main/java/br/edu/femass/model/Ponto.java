package br.edu.femass.model;

public class Ponto {

    private Double x;
    private Double y;

    public Ponto() {}

    public Ponto(Double x, Double y) {
        this.x = x;
        this.y = y;
    }

    public Double getX() {
        return x;
    }

    public void setX(Double x) {
        this.x = x;
    }

    public Double getY() {
        return y;
    }

    public void setY(Double y) {
        this.y = y;
    }

    public String getLocalizacao() {
        if(this.x > 0 && this.y > 0) return "1 Quadrante";
        if(this.x < 0 && this.y > 0) return "2 Quadrante";
        if(this.x < 0 && this.y < 0) return "3 Quadrante";
        if(this.x > 0 && this.y < 0) return "4 Quadrante";
        if(this.x != 0 && this.y == 0) return "Eixo de X";
        if(this.x == 0 && this.y != 0) return  "Eixo de Y";
        return "Origem";
    }

    public Double distancia(Ponto ponto) {
        double result = Math.pow(ponto.getX() - this.x, 2) + Math.pow(ponto.getY() - this.y, 2);
        return Math.sqrt(result);
    }

    @Override
    public String toString() {
        return "(" + this.x + ", " + this.y + ")";
    }
}
