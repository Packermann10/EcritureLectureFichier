#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "individu.h"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

void Lecturefichier();
void Ecriturefichier(individu I);
void ChercheIndividu(string Nom);

string mon_fichier = "Text.txt";
string line;

void Lecturefichier() {

//BUT : Ouvrir le fichier et afficher son contenu
//ENTREE : Le fichier 
//SORTIE : le contenu de ce fichier


	ifstream fichier(mon_fichier.c_str(), ios::in);

	if (fichier) { //en cas d'ouverture du fichier

		
		while (getline(fichier, line)) {

			cout << line << endl;
		
		}
	
		fichier.close(); // fermeture du fichier

	}else {

		cerr << "Erreur à l'ouverture" << endl;

	}


}


void Ecriturefichier(individu I) {

//BUT : Rentrer les données dans le fichier texte
//ENTREE : Les données de l'individu que l'on veut rentrer
//SORTIE :  Les données de l'individu


	ofstream fichier(mon_fichier.c_str(), ios::in);

	if (fichier) {

		fichier << "Nom :" << I.getNom() << endl;
		fichier << "Prehom :" << I.getPrenom() << endl;
		fichier << "Num sécu :" << I.getNumsecu() << endl;
		fichier << "Metier :" << I.getMetier() << endl;
		fichier << "Naissance :" << I.getDateN() << endl;
		fichier << "------" << endl;


		fichier.close();//fermeture fichier

	}
	else {

		cerr << "Erreur à l'ouverture" << endl;

	}


}

void ChercheIndividu(string Nom) {

	ifstream fichier(mon_fichier.c_str(), ios::in);

	if (fichier) {

		while (getline(fichier, line)) {

			if (line == "Nom :" + Nom) {
				do {
					cout << line << endl;
					getline(fichier, line);
				} while (line != "------");
			}
		}

		fichier.close();

	}else {

		cerr << "Erreur à l'ouverture" << endl;

	}


}

int main() {

	individu Z;
	individu T("Henry", "Thierry", "0987654321","Chroniqueur", 17, 8 ,1977);
	string mNom;

	Ecriturefichier(T);
	Lecturefichier;
	cout << "Qui voulez vous rechercher" << endl;
	cin >> mNom;
	ChercheIndividu(mNom);


	system("pause");
}