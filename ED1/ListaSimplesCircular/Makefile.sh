rm -rf *.o
rm -rf main
g++ -c main.cpp -o main.o
g++ -c CircList.cpp -o CircList.o
g++ -c Menu.cpp -o Menu.o
g++ main.o CircList.o Menu.o -o main
./main