rm -rf *.o
rm -rf main
g++ -c main.cpp -o main.o
g++ -c DoubleList.cpp -o DoubleList.o
g++ -c Menu.cpp -o Menu.o
g++ main.o DoubleList.o Menu.o -o main
./main
