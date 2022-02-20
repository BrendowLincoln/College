package br.com.femass;

import javax.swing.*;
import java.util.ArrayList;

public class Cliente implements DAO {

    private int codigo;
    private String nome;
    private static int qtObejtos = 0;

    public Cliente() {}

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    @Override
    public void inserir() {
        JOptionPane.showMessageDialog(null, "Adicionando cliente...");
    }

    @Override
    public void excluir() {
        JOptionPane.showMessageDialog(null, "Excluindo cliente...");
    }

    @Override
    public void localizar() {
        JOptionPane.showMessageDialog(null, "Localizando cliente...");
    }
}
