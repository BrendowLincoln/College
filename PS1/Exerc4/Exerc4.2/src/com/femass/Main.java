package com.femass;

public class Main {

    public static void main(String[] args) {

        Lampada l1 = new Lampada();
        Lampada l2 = new Lampada();

        l1.powerOn();

        l1.getState();
        l2.getState();

        l2.powerOn();

        l2.getState();
    }
}
