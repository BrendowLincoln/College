package model;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;

public class TelefoneTest {

    @Test
    public void deve_construir_um_telefone() {
        //Given / when
        Telefone telefone = new Telefone("22", "998261188", TipoTelefone.Celular);

        //Then

        Assertions.assertEquals(telefone  , telefone);
    }
}
