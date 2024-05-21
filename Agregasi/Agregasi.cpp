#include <iostream>
#include <string>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
	ibu* varIbu = new ibu("rahmi");
	ibu* varIbu2 = new ibu("aming");
	anak* varAnak1 = new anak("Yumi");
	anak* varAnak2 = new anak("Lily");
	anak* varAnak3 = new anak("Zidan");

	varIbu->tambahAnak(varAnak1);
	varIbu->tambahAnak(varAnak2);
	varIbu2->tambahAnak(varAnak3);
	varIbu2->tambahAnak(varAnak1);

	varIbu->cetakAnak();
	varIbu2->cetakAnak();

	delete varIbu;
	delete varIbu2;
}
