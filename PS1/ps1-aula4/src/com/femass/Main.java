package com.femass;

import javax.swing.*;

public class Main {

    public static void main(String[] args) {

        String sentence = JOptionPane.showInputDialog("Digite uma frase: ");
        String word = "";


        for(int i = 0; i < sentence.length(); i++) {

            if(sentence.charAt(i) == sentence.charAt(sentence.length()-1)) {
                sentence += " ";
            }

            if(sentence.charAt(i) != ' ') {
                word += sentence.charAt(i);

            } else {
                if(word.equalsIgnoreCase("sexo") || word.equalsIgnoreCase("sexual")) {
                    JOptionPane.showMessageDialog(null, "Conteudo improprio!");
                    break;
                }
                word = "";

                if(sentence.charAt(i) == sentence.charAt(sentence.length()-1)) {
                    JOptionPane.showMessageDialog(null, "Conteudo liberado!");
                    break;
                }
            }

        }

    }


}
