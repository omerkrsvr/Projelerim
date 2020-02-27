/**
* @file 2B_G171210101_Odev2
* @description Dosyadan alinan verileri cift yonlu dagiresel listeye ekleyip o listeyi sola ve saga hareket ettirme.
* @course 2.Ogretim B grubu
* @assignment 2.Odev
* @date 29.11.2018
* @author Omer KIRSEVER omer.kirsever@ogr.sakarya.edu.tr
*/
#include "Dugum.h"
#include <iostream>
#include <iomanip>
using namespace std;


Dugum::Dugum(int veri)
{
	data = veri;
	stack[top] = veri;
	top++;
}


Dugum::~Dugum()
{
}

void Dugum::StackYazdir()
{
	for (int i = top - 1; i >= 0; i--)
	{
		cout << setw(10) << stack[i] << setw(10);
	}
}
