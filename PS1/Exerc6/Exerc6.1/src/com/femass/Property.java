package com.femass;

public class Property {

    public String title;
    public double value;
    public String neighborhood;
    public double footage;

    public Property(String title, double value, String neighborhood, double footage) {
        this.title = title;
        this.value = value;
        this.neighborhood = neighborhood;
        this.footage = footage;
    }

    public Property() {}

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public double getValue() {
        return value;
    }

    public void setValue(double value) {
        this.value = value;
    }

    public String getNeighborhood() {
        return neighborhood;
    }

    public void setNeighborhood(String neighborhood) {
        this.neighborhood = neighborhood;
    }

    public double getFootage() {
        return footage;
    }

    public void setFootage(double footage) {
        this.footage = footage;
    }
}
