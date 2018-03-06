#pragma once

#include <iostream>
#include <string>

using namespace std;

class individu {

private:

	string Nom;
	string Prenom;
	string Numsecu;
	string Metier;
	int JourN;
	int MoisN;
	int AnneeN;


public:

	individu();
	individu(string mNumsecu, string mNom, string mPrenom, string mMetier, int mJourN, int mMoisN, int mAnneeN);
	string getNom() const;
	string getPrenom() const;
	string getNumsecu() const;
	string getDateN() const;
	string getMetier() const;
	void setMetier(string mMetier);
	~individu();

};