//ProgArch.cpp



#include <iostream>
#include <fstream>
#include <conio.h>
#include "ABMamigo.cpp"

using namespace std;


void main() {
	ABMamigo* amig = new ABMamigo("amigOO.dat");
	amig->adicionarNuevo();
	amig->listar();
	//amig->buscarReg();
	//amig->eliminarReg();
	//amig->modificarReg();
	//amig->listar();
	getch();
}
