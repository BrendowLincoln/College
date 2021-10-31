package com.femass;

public class Lampada {

    public String code;
    public String brand;
    public int volts;
    public boolean state;


    public void powerOn() {

        state = true;
    }

    public void powerOff() {

        state = false;
    }

    public void getState() {

        if(state) {

            System.out.println("A lâmpada está LIGADA");
        } else {

            System.out.println("A lâmpada está  desligada");
        }
    }
}
