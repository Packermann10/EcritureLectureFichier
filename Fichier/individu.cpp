#include "individu.h"

using namespace std;


individu::individu() {

	Nom = "Zidane";
	Prenom = "Zinedine";
	Numsecu = "1234567890";
	Metier = "Entraineur";
	JourN = 23;
	MoisN = 6;
	AnneeN = 1972;
	
}

individu::individu(string mNom, string mPrenom, string mNumsecu, string mMetier, int mJourN, int mMoisN, int mAnneeN) {


	Nom = mNom;
	Prenom = mPrenom;
	Numsecu = mNumsecu;
	Metier = mMetier;
	JourN = mJourN;
	MoisN = mMoisN;
	AnneeN = mAnneeN;
}

string individu::getNom() const {
	
	return Nom;
}

string individu::getPrenom() const {

	return Prenom;
}

string individu::getNumsecu() const {

	return Numsecu;
}

string individu::getMetier() const {

	return Metier;
}

string individu::getDateN() const {

	string DateN;
	DateN = to_string(JourN)+ "/" + to_string(MoisN) + "/" + to_string(AnneeN);
	return DateN;
}

void individu::setMetier(string mMetier) {

	Metier = mMetier;
}

individu::~individu() {

}


