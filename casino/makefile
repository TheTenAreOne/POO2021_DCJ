#
VIEW := View
CONTROLLER := Controller
MODEL := Model

debug := -ggdb3

all: programa
programa: casino juego jugador dosColores mayor13 controlador vista main masCercano 21
	g++ ${debug} -o Ejecutable Casino.o Juego.o Jugador.o DosColores.o Mayor13.o Controller.o View.o Main.o masCercano.o
controlador: ${CONTROLLER}/Controller.cpp ${CONTROLLER}/Controller.h ${MODEL}/Juego.h ${MODEL}/Jugador.h ${MODEL}/DosColores.h ${MODEL}/Mayor13.h ${MODEL}/21.h ${MODEL}/masCercano.h
	g++ -c ${debug} ${CONTROLLER}/Controller.cpp
juego: ${MODEL}/Juego.cpp ${MODEL}/Juego.h
	g++ -c ${debug} ${MODEL}/Juego.cpp
jugador: ${MODEL}/Jugador.cpp ${MODEL}/Jugador.h
	g++ -c ${debug} ${MODEL}/Jugador.cpp
dosColores: ${MODEL}/DosColores.cpp ${MODEL}/DosColores.h
	g++ -c ${debug} ${MODEL}/DosColores.cpp
mayor13: ${MODEL}/Mayor13.cpp ${MODEL}/Mayor13.h
	g++ -c ${debug} ${MODEL}/Mayor13.cpp
masCercano: ${MODEL}/masCercano.cpp ${MODEL}/masCercano.h
	g++ -c ${debug} ${MODEL}/masCercano.cpp
21: ${MODEL}/21.cpp ${MODEL}/21.h
	g++ -c ${debug} ${MODEL}/21.cpp
casino:${MODEL}/Casino.cpp ${MODEL}/Casino.h
	g++ -c ${debug} ${MODEL}/Casino.cpp
vista: ${VIEW}/View.cpp ${VIEW}/View.h ${CONTROLLER}/Controller.h
	g++ -c ${debug} ${VIEW}/View.cpp
main: Main.cpp ${VIEW}/View.h
	g++ -c ${debug} Main.cpp
clean: #comando para borrar los .o
	@echo "limpio los archivos intermediosd de las carpetas ..."+ ${MODEL} + ${VIEW}
	del *.o, del *.exe