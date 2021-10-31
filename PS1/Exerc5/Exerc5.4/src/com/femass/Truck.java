package com.femass;

import javax.swing.*;

public class Truck {

    public Fuel fuel;
    public double speed;

    public Truck() {

        this.speed = 0.0;
        this.fuel = Fuel.Gasoline;
    }

    public void switchFuel() {

        String menu = """
                Escolha um combustivel:\s
                1) Gas
                2) Gasoline
                3) Diesel
                """;

        int response = Integer.parseInt(JOptionPane.showInputDialog(menu));

        switch (response) {

            case 1:
                this.fuel = Fuel.Gas;
                break;
            case 2:
                this.fuel = Fuel.Gasoline;
                break;
            case 3:
                this.fuel = Fuel.Diesel;
                break;
            default:
                this.fuel = Fuel.Gasoline;
                break;

        }

        String output = "Combustivel atual é: " + this.fuel.name();

        JOptionPane.showMessageDialog(null, output);
    }

    public void  moreSpeed() {
        if(this.speed < 150) {
            this.speed++;

            JOptionPane.showMessageDialog(null, "Velocidade: " + this.speed);
        } else {
            JOptionPane.showMessageDialog(null, "Velocidade MÁXIMA!");
        }
    }

    public void  lessSpeed() {
        if(this.speed > 0) {
            this.speed--;

            JOptionPane.showMessageDialog(null, "Velocidade: " + this.speed);
        } else {
            JOptionPane.showMessageDialog(null, "Velocidade MÍNIMA!");
        }
    }


}

enum Fuel {

    Gas,
    Gasoline,
    Diesel
}
