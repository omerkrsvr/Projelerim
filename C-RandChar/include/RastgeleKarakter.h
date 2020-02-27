/**
*
* @author Omer Kirsever omer.kirsever@ogr.sakarya.edu.tr 
* @since 21.04.2019
* Rastgele karakter ve kelimeler uretebilen kutuphanenin fonksiyonlari.
* 
*/
#ifndef RASTGELEKARAKTER_H
#define RASTGELEKARAKTER_H

#include "Random.h"

//Rastgele karakter struct olusturuldu.
struct RASTGELEKARAKTER{
	Random rand; //Random sinifindan kalitim. 
};

typedef struct RASTGELEKARAKTER* RastgeleKarakter;

//RastgeleKarakter.c 'de Kullanilan fonksiyonlar yazildi.
RastgeleKarakter RastgeleKarakterSinifOlustur();
char RandomKarakter(RastgeleKarakter rk);
char* SayiliRandomKarakter(RastgeleKarakter rk,int miktar);
char  AralikliRastgele(RastgeleKarakter rk, char ilkharf,char sonharf);
char* SayiliAralikliRastgele(RastgeleKarakter rk, char ilkharf,char sonharf,int miktar);
char* BelirtilenKarakterler(RastgeleKarakter rk,int miktar,char asci1,char asci2,char asci3, char asci4,char asci5,char asci6);
char* RastgeleCumle(RastgeleKarakter rk,int kelimesayisi,int maxkelimeharf,int minkelimeharf);
void RastgeleKarakterSinifYoket(RastgeleKarakter rk );


#endif