package com.femass;

public class Radio extends Eletronic {

    public boolean isMusicPlaying;

    public Radio() {
        this.isMusicPlaying = false;
    }

    public void playMusic() {
        this.isMusicPlaying = true;
    }

    public void stopMusic() {
        this.isMusicPlaying = false;
    }

    public boolean getIsMusicPlaying() {
        return isMusicPlaying;
    }
}
