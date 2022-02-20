package br.com.femass;

public class Main {

    public static void main(String[] args) {

        Cliente cliente = new Cliente();
        Fornecedor fornecedor = new Fornecedor();
        Produto produto = new Produto();

        cliente.inserir();
        cliente.excluir();
        cliente.localizar();

        fornecedor.inserir();
        fornecedor.excluir();
        fornecedor.localizar();

        produto.inserir();
        produto.excluir();
        produto.localizar();



    }
}
