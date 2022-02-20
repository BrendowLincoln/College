package br.com.femass;

import javax.swing.*;
import java.text.DecimalFormat;

public class PessoaFisica extends Pessoa{

    private String rg;

    public PessoaFisica() {}

    public PessoaFisica(String nome, double rendaBruta, String rg) {
        this.nome = nome;
        this.rendaBruta = rendaBruta;
        this.rg = rg;

        this.calcularIr();
    }

    public String getRg() {
        return rg;
    }

    public void setRg(String rg) {
        this.rg = rg;
    }

    @Override
    public void calcularIr() {

        DecimalFormat decimalFormat = new DecimalFormat("#,###.00");

        StringBuilder output = new StringBuilder()
                .append(String.format("Cliente: %s\n", this.nome))
                .append(String.format("RG: %S\n", this.rg));

        if(this.rendaBruta <= 1500.00) {
            double ir = (0.0 * this.rendaBruta);
            output.append(String.format("Imposto de renda: R$ %s", decimalFormat.format(ir)));
        } else if(this.rendaBruta > 1500.00 && this.rendaBruta <= 3000.00) {
            double ir = (0.1 * this.rendaBruta);
            output.append(String.format("Imposto de renda: R$ %s", decimalFormat.format(ir)));
        } else if(this.rendaBruta > 3000.00 && this.rendaBruta <= 10000.00) {
            double ir = (0.2 * this.rendaBruta);
            output.append(String.format("Imposto de renda: R$ %s", decimalFormat.format(ir)));
        } else {
            double ir = (0.27 * this.rendaBruta);
            output.append(String.format("Imposto de renda: R$ %s", decimalFormat.format(ir)));
        }

        JOptionPane.showMessageDialog(null, output.toString());
    }
}
