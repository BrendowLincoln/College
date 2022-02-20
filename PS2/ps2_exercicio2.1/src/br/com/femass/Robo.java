package br.com.femass;

public class Robo implements IControle{

    public Robo() {}

    @Override
    public void andar() {
        System.out.println("Andando...");
    }

    @Override
    public void virar() {
        System.out.println("Virando...");
    }

    @Override
    public void falar() {
        System.out.println("Falando...");
    }
}
