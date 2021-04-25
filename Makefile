all: main.out

clean:
	rm *.o
	rm *.out
    
main.out: main.o plateau.o compagnie.o gare.o cases.o quartier.o nonAchetable.o joueur.o achetable.o caseDepart.o
	g++ -o main.out main.o plateau.o compagnie.o gare.o cases.o quartier.o nonAchetable.o joueur.o achetable.o caseDepart.o
    
main.o: main.cpp
	g++ -c main.cpp
    
plateau.o: plateau.cpp
	g++ -c plateau.cpp 
    
compagnie.o: Cases/compagnie.cpp
	g++ -c Cases/compagnie.cpp
    
gare.o: Cases/gare.cpp
	g++ -c Cases/gare.cpp
    
cases.o: Cases/cases.cpp
	g++ -c Cases/cases.cpp
    
quartier.o: Cases/quartier.cpp
	g++ -c Cases/quartier.cpp
    
nonAchetable.o: nonAchetable.cpp
	g++ -c Cases/nonAchetable.cpp
    
joueur.o: joueur.cpp
	g++ -c joueur.cpp
    
achetable.o: Cases/achetable.cpp
	g++ -c Cases/achetable.cpp
    
caseDepart.o: Cases/caseDepart.cpp
	g++ -c Cases/caseDepart.cpp