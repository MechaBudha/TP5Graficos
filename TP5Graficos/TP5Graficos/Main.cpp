#include <nana\gui.hpp>
#include <nana\gui\widgets\label.hpp>
#include <nana\gui\widgets\button.hpp>
#include <SSM\Scoreboard.h>
#include <iostream>
#include <string>
using namespace std;
using namespace nana;

void main() {
	Nodo* nodo = new Nodo;
	Scoreboard* miTabla= new Scoreboard;
	char* nom = new char;
	//1
	strcpy("TOM", nom);
	miTabla->insertScr(nom, 100);
	//2
	strcpy("MAT", nom);
	miTabla->insertScr(nom, 100);
	//3
	strcpy("PED", nom);
	miTabla->insertScr(nom, 85);
	//4
	strcpy("JUA", nom);
	miTabla->insertScr(nom, 105);
	//5
	strcpy("ROL", nom);
	miTabla->insertScr(nom, 110);
	//6
	strcpy("ADR", nom);
	miTabla->insertScr(nom, 95);
	//7
	strcpy("FEL", nom);
	miTabla->insertScr(nom, 90);
	//8
	strcpy("AGU", nom);
	miTabla->insertScr(nom, 120);
	//9
	strcpy("ROD", nom);
	miTabla->insertScr(nom, 2000);
	//10
	strcpy("ROB", nom);
	miTabla->insertScr(nom, 2);
	
	for (int i = 0; i < NODOL; i++)
	{
		*nodo = miTabla->showScr(i + 1);
		cout << "Pos: " << i << " Nom: " << nodo->name << " Scr: " << nodo->score << endl;
	}
	miTabla->resetScr();
	delete nodo;
	delete miTabla;
	delete nom;
}