package br.com.femass;

import javax.swing.*;
import java.util.ArrayList;

public class Fornecedor implements DAO {

    private String cnpj;
    private String razaoSocial;
    private static int qtObejtos = 0;

    public Fornecedor() {}

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getRazaoSocial() {
        return razaoSocial;
    }

    public void setRazaoSocial(String razaoSocial) {
        this.razaoSocial = razaoSocial;
    }

    @Override
    public void inserir() {
        JOptionPane.showMessageDialog(null, "Adicionando fornecedor...");
    }

    @Override
    public void excluir() {
        JOptionPane.showMessageDialog(null, "Excluindo fornecedor...");
    }

    @Override
    public void localizar() {
        JOptionPane.showMessageDialog(null, "Localizando fornecedor...");
    }
}
