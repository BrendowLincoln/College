package br.com.femass;

import javax.swing.*;
import java.util.ArrayList;

public class Produto implements DAO {

    private int numero;
    private String descricao;
    private static int qtObejtos = 0;

    public Produto() {}

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    @Override
    public void inserir() {

        JOptionPane.showMessageDialog(null, "Adicionando produto....");
    }

    @Override
    public void excluir() {
        JOptionPane.showMessageDialog(null, "Excluindo produto...");
    }

    @Override
    public void localizar() {
        JOptionPane.showMessageDialog(null, "Localizando produto...");
    }

    public void baixar() {
        JOptionPane.showMessageDialog(null, "Baixando dados de produtos...");

    }
}
