package com.femass;

public class Main {

    public static void main(String[] args) {

        Tv tv1 = new Tv();
        Tv tv2 = new Tv(true, 23, 45);

        System.out.println(tv1.toString());
        System.out.println(tv2.toString());

        tv1.powerOnOff();
        tv1.channelUp();
        tv1.channelUp();

        for(int i = 0; i < 10; i++) {
            tv1.soundUp();
        }

        tv2.channelDown();
        tv2.soundDown();

        System.out.println(tv1.toString());
        System.out.println(tv2.toString());
    }
}
