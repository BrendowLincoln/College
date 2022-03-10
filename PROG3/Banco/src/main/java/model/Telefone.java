package model;

//TODO: Fazer testes da classe Telefone
public class Telefone {
    private String ddd;
    private String numero;
    private TipoTelefone tipoTelefone;

    public Telefone (String ddd, String numero, TipoTelefone tipoTelefone) {
        if (ddd.length()!=2) {
            throw new IllegalArgumentException("DDD tem que ter dois dígitos");
        }

        if (tipoTelefone.equals(TipoTelefone.Celular)) {
            if (numero.length()!=9) {
                throw new IllegalArgumentException("Celular tem que ter 9 dígitos em seu número");
            }
        } else {
            if (numero.length() != 8) {
                throw new IllegalArgumentException("Telefone Fixo tem que ter 8 dígitos em seu número");
            }
        }
        this.tipoTelefone = tipoTelefone;
        this.numero = numero;
        this.ddd = ddd;
    }

    public String getDdd() {
        return ddd;
    }

    public void setDdd(String ddd) {
        this.ddd = ddd;
    }

    public String getNumero() {
        return numero;
    }

    public void setNumero(String numero) {
        this.numero = numero;
    }

    //TODO: Testar se o toString está retornando correto
    @Override
    public String toString() {
        return "(" + this.ddd + ") " + this.numero;
    }
}
