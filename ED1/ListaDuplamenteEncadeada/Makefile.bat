@echo Apagar arquivos pre-existentes
del /f *.exe *.o
@echo Compilar cpp para obj
g++.exe -c main.cpp -o main.o
g++.exe -c DoubleList.cpp -o DoubleList.o
g++.exe -c Menu.cpp -o Menu.o
@echo Ligar objs para exe
g++.exe main.o DoubleList.o Menu.o -o main.exe
@echo Inicia executavel
start main.exe