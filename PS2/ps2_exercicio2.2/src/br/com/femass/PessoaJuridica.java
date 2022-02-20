package br.com.femass;

import javax.swing.*;
import java.text.DecimalFormat;

public class PessoaJuridica extends Pessoa {

    private String cnpj;

    public PessoaJuridica() {}

    public PessoaJuridica(String nome, double rendaBruta, String cnpj) {
        this.nome = nome;
        this.rendaBruta = rendaBruta;
        this.cnpj = cnpj;

        this.calcularIr();
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    @Override
    public void calcularIr() {

        DecimalFormat decimalFormat = new DecimalFormat("#,###.00");

        StringBuilder output = new StringBuilder()
                .append(String.format("Cliente: %s\n", this.nome))
                .append(String.format("CNPJ: %S\n", this.cnpj));

        if(this.rendaBruta <= 30000) {
            double ir = (0.0 * this.rendaBruta);
            output.append(String.format("Imposto de renda: R$ %s", decimalFormat.format(ir)));
        } else if(this.rendaBruta > 30000.00 && this.rendaBruta <= 50000.00) {
            double ir = (0.1 * this.rendaBruta);
            output.append(String.format("Imposto de renda: R$ %s", decimalFormat.format(ir)));
        } else if(this.rendaBruta > 50000.00 && this.rendaBruta <= 90000.00) {
            double ir = (0.2 * this.rendaBruta);
            output.append(String.format("Imposto de renda: R$ %s", decimalFormat.format(ir)));
        } else {
            double ir = (0.27 * this.rendaBruta);
            output.append(String.format("Imposto de renda: R$ %s", decimalFormat.format(ir)));
        }

        JOptionPane.showMessageDialog(null, output.toString());
    }
}
