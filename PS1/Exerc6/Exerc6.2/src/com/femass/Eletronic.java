package com.femass;

public class Eletronic {

    public boolean isTurnedOn;

    public Eletronic() {
        this.isTurnedOn = false;
    }

    public void powerOn() {
        this.isTurnedOn = true;
    }

    public void powerOff() {
        this.isTurnedOn = false;
    }

    public boolean getIsTurnedOn() {
        return isTurnedOn;
    }
}
