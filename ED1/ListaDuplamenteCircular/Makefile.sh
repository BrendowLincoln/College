rm -rf *.o
rm -rf main
g++ -c main.cpp -o main.o
g++ -c DoubleCircList.cpp -o DoubleCircList.o
g++ -c Menu.cpp -o Menu.o
g++ main.o DoubleCircList.o Menu.o -o main
./main