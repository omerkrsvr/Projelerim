/**
*
* @author Omer Kirsever omer.kirsever@ogr.sakarya.edu.tr 
* @since 21.04.2019
* Rastgele karakter ve kelimeler uretebilen kutuphanenin kodlari.
* 
*/
#include "Random.h"

//Random sinifinin kurucu fonksiyonu.
Random RandomSinifKur()
{
    Random this;
    this=(Random)malloc(sizeof(struct RANDOM));
    this->lfsr = 0xACE1u;
    this->bit;
    return this;
}
// Windows.h kutuphanesi araciligiyla sistemin suanki zamaninin milisaniyesini elde ettim.
int CurrentMs()
{
    SYSTEMTIME str_t;
	GetSystemTime(&str_t);
    int milisaniye=str_t.wMilliseconds; 
    return milisaniye;
}

unsigned RandomSayi(const Random r)
{
    r->bit  = ((r->lfsr >> 0) ^ (r->lfsr >> 2) ^ (r->lfsr >> 3) ^ (r->lfsr >> 5) ) & 1;
    (r->lfsr =  (r->lfsr >> 1) | (r->bit << 15)); //Odev raporuna ekledigim kaynaktan yararlandim. 
    return (r->lfsr * (CurrentMs())); // MiliSaniye dahada tahmin edilemez olsun diye lfrs metoduyla guclendirdim.
}

void RandomSinifYoket(Random r) // Random sinifinin yikici fonksiyonu.
{
    if (r == NULL) return;
	free(r);
	r = NULL;
}