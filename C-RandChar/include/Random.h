/**
*
* @author Omer Kirsever omer.kirsever@ogr.sakarya.edu.tr 
* @since 21.04.2019
* Rastgele karakter ve kelimeler uretebilen kutuphane fonksiyonlari.
* 
*/
#ifndef RANDOM_H
#define RANDOM_H

#include <Windows.h> // Bu kutuphaneden suanki zamanin milisaniyesini aldim.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Random sinifi icin struct
struct RANDOM{
    unsigned short lfsr;
    unsigned bit;
};

typedef struct RANDOM* Random;
//Random.c 'de Kullanilan fonksiyonlar yazildi.
Random RandomSinifKur();
int CurrentMs();
unsigned RandomSayi(const Random);
void RandomSinifYoket(Random);

#endif