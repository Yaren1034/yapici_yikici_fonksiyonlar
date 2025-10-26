/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class CepTelefonu {
public:
	char model[30];
	float fiyat;
	bool aramaDurumu;

	CepTelefonu() {
		aramaDurumu = false;
		cout << "--> Bir cep Telefonu nesnesi olusturuldu (YAPICI METOT calisti)"<<endl;
		cout << "  Arama Durumu baslangicta: "<< aramaDurumu <<endl;
	}
	~CepTelefonu() {
		cout << "<-- Bir cep Telefonu NESNESD0 yok edildi (YAPICI METOT calisti)"<<endl;
		cout << "  Gule Gule  " << model <<"!"<<endl;
	}
	void aramaBaslat(string m) {
		aramaDurumu = true;
		string modelStr(model);
		cout << modelStr << "ile" << m << "arama baslandi..." <<endl;
	}
};
int main() {
	cout << "### MAIN Fonksiyonu BaslD1yor ###" <<endl;
	CepTelefonu benimTelefonum;
	strcpy(benimTelefonum.model, "Samsung A71");
	benimTelefonum.fiyat = 8500.0;
	benimTelefonum.aramaBaslat("Annemi");
	cout << "Telefonun Fiyati: "<< benimTelefonum.fiyat<<endl;
	cout << "### MAIN Fonksiyonu bitiyor. ###"<<endl;
	return 0;
}
