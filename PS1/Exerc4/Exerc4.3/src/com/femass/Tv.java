package com.femass;

public class Tv {

    public boolean turnedOn;
    public int channel;
    public int sound;

    public Tv() {
        this.turnedOn = false;
    }

    public Tv(boolean turnOn, int channel, int sound) {
        this.turnedOn = turnOn;
        this.channel = channel;
        this.sound = sound;
    }

    public void powerOnOff() {
        turnedOn = !turnedOn;

        if(turnedOn) {

            System.out.println("TV LIGADA!");
        } else {

            System.out.println("TV DESLIGADA!");
        }
    }

    public void soundUp() {
        if(this.sound < 100) {
            sound++;
            System.out.println("Volume: " + sound);
        } else {
            System.out.println("Volume máximo!");
        }
    }

    public void soundDown() {
        if(this.sound > 0) {
            sound--;
            System.out.println("Volume: " + sound);
        } else {
            System.out.println("Volume mínimo!");
        }
    }


    public void channelUp() {
        if(this.channel < 999) {
            channel++;
            System.out.println("Canal: " + channel);
        } else {
            System.out.println("Canal: " + channel);
        }
    }

    public void channelDown() {
        if(this.channel > 0) {
            channel--;
            System.out.println("Canal: " + channel);
        } else {
            System.out.println("Canal: "  + channel);
        }
    }

    @Override
    public String toString() {

        if(turnedOn) {
            return "TV LIGADA! Canal: " + channel + " Volume: " + sound + "\n";
        }

        return "TV DESLIGADA!\n";
    }
}














