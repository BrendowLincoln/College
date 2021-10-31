package com.femass;

public class Residential extends Property {

    public int qtParkingSpace;
    public int qtRooms;
    public int qtSuites;

    public Residential(String title, double value, String neighborhood, double footage, int qtParkingSpace, int qtRooms, int qtSuites) {
        super(title, value, neighborhood, footage);
        this.qtParkingSpace = qtParkingSpace;
        this.qtRooms = qtRooms;
        this.qtSuites = qtSuites;
    }

    public Residential(int qtParkingSpace, int qtRooms, int qtSuites) {
        this.qtParkingSpace = qtParkingSpace;
        this.qtRooms = qtRooms;
        this.qtSuites = qtSuites;
    }

    public Residential() { }

    public int getQtParkingSpace() {
        return qtParkingSpace;
    }

    public void setQtParkingSpace(int qtParkingSpace) {
        this.qtParkingSpace = qtParkingSpace;
    }

    public int getQtRooms() {
        return qtRooms;
    }

    public void setQtRooms(int qtRooms) {
        this.qtRooms = qtRooms;
    }

    public int getQtSuites() {
        return qtSuites;
    }

    public void setQtSuites(int qtSuites) {
        this.qtSuites = qtSuites;
    }
}
