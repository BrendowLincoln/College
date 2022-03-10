package model;

import java.util.ArrayList;
import java.util.InputMismatchException;
import java.util.List;

//TODO: Fazer testes da classe de correntista
public class Correntista {
    private Long id;
    private String nome;
    private String cpf;
    private List<Telefone> telefones = new ArrayList<Telefone>();

    //TODO: Testar o método construtor
    public Correntista(String nome, String cpf) {
        if (!validaCpf(cpf)) {
            throw new IllegalArgumentException("CPF Inválido");
        }
        this.nome = nome;
        this.cpf = cpf;
    }

    private boolean validaCpf(String CPF) {
        // considera-se erro CPF's formados por uma sequencia de numeros iguais
        if (CPF.equals("00000000000") ||
                CPF.equals("11111111111") ||
                CPF.equals("22222222222") || CPF.equals("33333333333") ||
                CPF.equals("44444444444") || CPF.equals("55555555555") ||
                CPF.equals("66666666666") || CPF.equals("77777777777") ||
                CPF.equals("88888888888") || CPF.equals("99999999999") ||
                (CPF.length() != 11))
            return (false);

        char dig10, dig11;
        int sm, i, r, num, peso;

        // "try" - protege o codigo para eventuais erros de conversao de tipo (int)
        try {
            // Calculo do 1o. Digito Verificador
            sm = 0;
            peso = 10;
            for (i = 0; i < 9; i++) {
                // converte o i-esimo caractere do CPF em um numero:
                // por exemplo, transforma o caractere '0' no inteiro 0
                // (48 eh a posicao de '0' na tabela ASCII)
                num = (int) (CPF.charAt(i) - 48);
                sm = sm + (num * peso);
                peso = peso - 1;
            }

            r = 11 - (sm % 11);
            if ((r == 10) || (r == 11))
                dig10 = '0';
            else dig10 = (char) (r + 48); // converte no respectivo caractere numerico

            // Calculo do 2o. Digito Verificador
            sm = 0;
            peso = 11;
            for (i = 0; i < 10; i++) {
                num = (int) (CPF.charAt(i) - 48);
                sm = sm + (num * peso);
                peso = peso - 1;
            }

            r = 11 - (sm % 11);
            if ((r == 10) || (r == 11))
                dig11 = '0';
            else dig11 = (char) (r + 48);

            // Verifica se os digitos calculados conferem com os digitos informados.
            if ((dig10 == CPF.charAt(9)) && (dig11 == CPF.charAt(10)))
                return (true);
            else return (false);
        } catch (InputMismatchException erro) {
            return (false);
        }
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getCpf() {
        return cpf;
    }


    public void setCpf(String cpf) {

        if(validaCpf(this.cpf)) {
            throw new IllegalArgumentException("CFP inválido!");
        }

        this.cpf = cpf;
    }

    public List<Telefone> getTelefones() {
        return telefones;
    }

    //TODO: Testar se os telefones estão sendo adicionados
    public void adicionarTelefone(Telefone telefone) {
        this.telefones.add(telefone);
    }
}
