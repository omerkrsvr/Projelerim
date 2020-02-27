/**
* @file 2B_G171210101_Odev2 
* @description Dosyadan alinan verileri cift yonlu dagiresel listeye ekleyip o listeyi sola ve saga hareket ettirme.
* @course 2.Ogretim B grubu
* @assignment 2.Odev
* @date 29.11.2018
* @author Omer KIRSEVER omer.kirsever@ogr.sakarya.edu.tr
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include"Dugum.h"
Dugum *head;
void push(int veri);
using namespace std;
int main()
{
	int sayi, sonuc, konum;
	ifstream DegerOkuma;
	DegerOkuma.open("dosya.txt");
	while (DegerOkuma >> sayi)
	{
		push(sayi);
	}
	DegerOkuma.close();
	cout << "1 - Sola Hareket \n2 - Saga Hareket \n3 - Bir Dugumun Durumlarini Yazdir \n4 - Tum Durumlari Yazdir \n5 - Cikis" << endl;
	do
	{
		cin >> sonuc;
		if (sonuc == 1)
		{
			Dugum*temp = head;
			int yedek = head->data;
			while (temp->next != head)
			{
				temp->data = temp->next->data;
				temp->stack[temp->top] = temp->data;
				temp->top++;
				temp = temp->next;
			}
			temp->data = yedek;
			temp->stack[temp->top] = yedek;
			temp->top++;
		}
		if (sonuc == 2)
		{
			Dugum*temp = head;
			int yedek = head->data;
			while (temp->prev != head)
			{
				temp->data = temp->prev->data;
				temp->stack[temp->top] = temp->data;
				temp->top++;
				temp = temp->prev;
			}
			temp->data = yedek;
			temp->stack[temp->top] = yedek;
			temp->top++;
		}
		if (sonuc == 3)
		{
			cout << "Dugum Konumu:";
			cin >> konum;
			Dugum*temp = head;
			for (int i = 1; i < konum; i++)
			{
				temp = temp->next;
			}
			cout << setw(10) << temp->data << setw(10);
			temp->StackYazdir();
			cout << endl;
		}
		if (sonuc == 4)
		{
			Dugum*temp = head;
			while (temp->next != head)
			{
				cout << setw(10) << temp->data << setw(10) << ":" << setw(10);
				temp->StackYazdir();
				cout << endl;
				temp = temp->next;
			}
			cout << setw(10) << temp->data << setw(10) << ":" << setw(10);
			temp->StackYazdir();
			cout << endl;
		}

	} while (sonuc != 5);
	system("pause");
	return 0;
}
void push(int veri)
{
	if (head == NULL)
	{
		head = new Dugum(veri);
		head->next = head;
		head->prev = head;
	}
	else
	{
		Dugum*temp = head;
		while (temp->next != head)
		{
			temp = temp->next;
		}
		temp->next = new Dugum(veri);
		temp->next->next = head;
		temp->next->data = veri;
		temp->next->prev = temp;
		head->prev = temp->next;
	}
}