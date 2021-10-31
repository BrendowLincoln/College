package com.femass;

public class Main {

    public static void main(String[] args) {

        Property property = new Property("A venda", 22422.00, "Cavaleiros", 205.45);

        Land land = new Land("A venda", 104245.00, "Bairro da Glória", 506.42);

        Residential residential = new Residential();

        Apartment apartment = new Apartment();

        House house = new House("Luxo apartamento", 870.42, "Centro", 90.52, 1, 2, 1);

        System.out.println(property.getTitle() + " " + property.getValue() + " " + property.getNeighborhood() +  " " + property.getFootage());
        System.out.println(land.getTitle() + " " + land.getValue() + " " + land.getNeighborhood() +  " " + land.getFootage());
        System.out.println(house.getTitle() + " " + house.getValue() + " " + house.getNeighborhood() +  " " + house.getFootage() +  " " + house.getQtParkingSpace() +  " " + house.getQtRooms() +  " " + house.getQtSuites() );

        residential.setTitle("Village");

        System.out.println(residential.getTitle());

        apartment.setFloor(10);

        System.out.println(apartment.getFloor());

        property.setTitle("Vendido");

        System.out.println(property.getTitle());
    }
}
