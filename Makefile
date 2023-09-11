CC = g++
CFLAG = 

main.exe : Prithvi_ScientificCalc.o Prithvi_ScientificCalc_main.o
	$(CC) $(CFLAG) -o calc_main.exe Prithvi_ScientificCalc.o Prithvi_ScientificCalc_main.o

admissions_main.o : Prithvi_ScientificCalc_main.cpp
	$(CC) $(CFLAG) -c Prithvi_ScientificCalc_main.cpp

admissions.o : Prithvi_ScientificCalc.cpp
	$(CC) $(CFLAG) -c Prithvi_ScientificCalc.cpp

