@echo Apagar arquivos pre-existentes
del /f *.exe *.o
@echo Compilar cpp para obj
g++.exe -c Calculadora.cpp -o Calculadora.o
g++.exe -c main.cpp -o main.o
@echo Ligar objs para exe
g++.exe main.o Calculadora.o -o main.exe
@echo Inicia executavel
start main.exe