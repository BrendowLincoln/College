package com.femass;


import javax.swing.*;

public class Main {

    public static void main(String[] args) {

        String aux = "";
        float nota1 = 0, nota2 = 0, media = 0;

        aux = JOptionPane.showInputDialog("Indique a primeira nota: ");
        nota1 = Float.parseFloat(aux);

        aux = JOptionPane.showInputDialog("Indique a segunda nota: ");
        nota2 = Float.parseFloat(aux);

        media = (nota1 + nota2)/2;

        JOptionPane.showMessageDialog(null, "A média do aluno é: " + media);


    }
}
