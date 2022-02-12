rm -rf *.o
rm -rf main
g++ -c main.cpp -o main.o
g++ -c List.cpp -o List.o
g++ main.o List.o -o main
./main