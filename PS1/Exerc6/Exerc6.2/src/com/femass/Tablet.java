package com.femass;

public class Tablet extends Eletronic {

    public int sound;

    public Tablet(int sound) {
        this.sound = sound;
    }

    public Tablet() {
        this.sound = 0;
    }

    public void soundUp() {
        this.sound++;
    }

    public void soundDown() {
        this.sound--;
    }

    public int getSound() {
        return sound;
    }
}
