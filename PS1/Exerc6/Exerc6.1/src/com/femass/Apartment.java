package com.femass;

public class Apartment extends Residential {

    public int floor;
    public boolean risingSun;
    public String tower;

    public Apartment(String title, double value, String neighborhood, double footage, int qtParkingSpace, int qtRooms, int qtSuites, int floor, boolean risingSun, String tower) {
        super(title, value, neighborhood, footage, qtParkingSpace, qtRooms, qtSuites);
        this.floor = floor;
        this.risingSun = risingSun;
        this.tower = tower;
    }

    public Apartment(int floor, boolean risingSun, String tower) {
        this.floor = floor;
        this.risingSun = risingSun;
        this.tower = tower;
    }

    public Apartment () { }

    public int getFloor() {
        return floor;
    }

    public void setFloor(int floor) {
        this.floor = floor;
    }

    public boolean isRisingSun() {
        return risingSun;
    }

    public void setRisingSun(boolean risingSun) {
        this.risingSun = risingSun;
    }

    public String getTower() {
        return tower;
    }

    public void setTower(String tower) {
        this.tower = tower;
    }
}
