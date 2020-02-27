/**
* @file 2B_G171210101_Odev2
* @description Dosyadan alinan verileri cift yonlu dagiresel listeye ekleyip o listeyi sola ve saga hareket ettirme.
* @course 2.Ogretim B grubu
* @assignment 2.Odev
* @date 29.11.2018
* @author Omer KIRSEVER omer.kirsever@ogr.sakarya.edu.tr
*/
#pragma once
class Dugum
{
public:
	int data;
	Dugum *next;
	Dugum *prev;
	int stack[10];
	int top = 0;

	Dugum(int);
	~Dugum();
	void StackYazdir();
};