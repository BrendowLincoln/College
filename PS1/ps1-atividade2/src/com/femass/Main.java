package com.femass;

import javax.swing.*;
import java.text.DecimalFormat;

public class Main {

    public static void main(String[] args) {

        DecimalFormat df = new DecimalFormat("##.##");
        int contador = 0;
        double mediaTurma = 0.0, media = 0.0, somaMediaTurma = 0.0;
        String continuar = "s";



        do {

            String nomeAluno = JOptionPane.showInputDialog("Informe o nome do aluno");

            double mediaAluno = 0.0, somaNotas = 0.0;

            for(int i = 0; i < 3; i++) {

                somaNotas += Double.parseDouble((JOptionPane.showInputDialog("Informe a nota " + (i+1) + ":")));

            }

            mediaAluno = somaNotas/3;
            JOptionPane.showMessageDialog(null, "A media do aluno " + nomeAluno + " foi: " +  df.format(mediaAluno));

            somaMediaTurma += mediaAluno;

            continuar = JOptionPane.showInputDialog("[s] Continuar, [n] Sair:").toLowerCase();


            contador++;

        } while (continuar.equals("s"));

        mediaTurma = somaMediaTurma/contador;

        JOptionPane.showMessageDialog(null, "A media da turma foi de: " + df.format(mediaTurma));


    }
}
