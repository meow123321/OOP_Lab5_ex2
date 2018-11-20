#include"CaineFaraPete.h"

CaineFaraPete::CaineFaraPete(string rasa, string nume, string culoare, int inaltime, int greutate, int varsta): 
	Caine(nume, culoare, inaltime, greutate, varsta) {
	this->rasa = rasa;
}

void CaineFaraPete::AfisareFaraPete() {
	cout << "Rasa cainelui este:" << this->rasa << endl;

}