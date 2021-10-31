package com.femass;

import javax.swing.*;
import java.text.DecimalFormat;

public class Main {

    public static void main(String[] args) {

        double altura = 0.0, base = 0.0;

        DecimalFormat formatador = new DecimalFormat("0.00");

        altura = Double.parseDouble(JOptionPane.showInputDialog("Informe o valor da altura do retangulo"));
        base = Double.parseDouble(JOptionPane.showInputDialog("Informe o valor da base do retangulo"));

        double area = altura * base;
        double perimetro = (altura*2) + (base * 2);

        JOptionPane.showMessageDialog(null, "A area do retangulo e de " + formatador.format(area) + " m2");
        JOptionPane.showMessageDialog(null, "O perimetro do retangulo e de " + formatador.format(perimetro) + " m2");

    }
}
