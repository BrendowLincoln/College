package com.femass;

public class Main {

    public static void main(String[] args) {

        Eletronic eletronic = new Eletronic();
        Tablet tablet = new Tablet();
        Radio radio = new Radio();

        System.out.println(eletronic.getIsTurnedOn());
        eletronic.powerOn();
        System.out.println(eletronic.getIsTurnedOn());
        eletronic.powerOff();
        System.out.println(eletronic.getIsTurnedOn());

        System.out.println(tablet.getIsTurnedOn() + " " + tablet.getSound());
        tablet.powerOn();
        tablet.soundUp();
        tablet.soundUp();
        tablet.soundUp();
        tablet.soundUp();
        tablet.soundUp();
        System.out.println(tablet.getIsTurnedOn() + " " + tablet.getSound());
        tablet.soundDown();
        tablet.soundDown();
        tablet.soundDown();
        System.out.println(tablet.getIsTurnedOn() + " " + tablet.getSound());

        System.out.println(radio.getIsTurnedOn() + " " + radio.getIsMusicPlaying());
        radio.powerOn();
        radio.playMusic();
        System.out.println(radio.getIsMusicPlaying());
        radio.stopMusic();
        System.out.println(radio.getIsMusicPlaying());


    }
}
