/**
*
* @author Omer Kirsever omer.kirsever@ogr.sakarya.edu.tr 
* @since 21.04.2019
* Rastgele karakter ve kelimeler uretebilen kutuphanenin kodlari.
* 
*/
#include "RastgeleKarakter.h"

// RastgeleKarakter sinifi icin olusturma fonksiyonu
RastgeleKarakter RastgeleKarakterSinifOlustur(){
	RastgeleKarakter this;
	this = (RastgeleKarakter)malloc(sizeof(struct RASTGELEKARAKTER));
	this->rand = RandomSinifKur();
	return this;
}
// Random.c de hazirlanan islemler sonunda rastgele sayi uretip chara ceviren fonksiyon
char RandomKarakter(RastgeleKarakter rk){
	unsigned sayi = RandomSayi(rk->rand)%122; 
	while(sayi < 65 || (sayi < 97 && sayi > 90))
		sayi = RandomSayi(rk->rand)%122;
	return (char)sayi;	
}

// Sayili rastgele karakter basan fonksiyon. 
char* SayiliRandomKarakter(RastgeleKarakter rk,int miktar)
{   
	char *dizi = (char*)malloc(sizeof(char)*miktar);
	for(int i = 0; i < miktar; i++){
		dizi[i] = RandomKarakter(rk);
	}
	return dizi;
}

//Verilen aralik arasinda tek karakter basan fonksiyon.
char AralikliRastgele(RastgeleKarakter rk, char ilkharf,char sonharf){
int ilkharf2=ilkharf+1;
int aralik= sonharf-ilkharf2;
unsigned sayi = RandomSayi(rk->rand)%aralik;
int yenisayi=sayi+ilkharf2;
return (char)yenisayi;
}

//Verilen aralik arasinda istenilen miktarda karakter basan fonksiyon.
char* SayiliAralikliRastgele(RastgeleKarakter rk, char ilkharf,char sonharf,int miktar){
	int ilkharf2=ilkharf+1;
	int aralik= sonharf-ilkharf2;
	char *dizi = (char*)malloc(sizeof(char)*miktar);
	for(int i = 0; i < miktar; i++){
		unsigned sayi = RandomSayi(rk->rand)%aralik;
		int yenisayi=sayi+ilkharf2;
		dizi[i]=yenisayi;
	}
	dizi[miktar]='\0';
	return dizi;
}
//Belirtilen charlar arasinda rastgele istenilen miktarda karakter basan fonksiyon.
char* BelirtilenKarakterler(RastgeleKarakter rk,int miktar,char asci1,char asci2,char asci3, char asci4,char asci5,char asci6){
	char *dizi = (char*)malloc(sizeof(char)*miktar);
	for(int i = 0; i < miktar; i++){
		unsigned sayi = RandomSayi(rk->rand)%6;
		if(sayi==0){
			dizi[i]=asci1;
		}	
			else if(sayi==1){
			dizi[i]=asci2;
		}	
			else if(sayi==2){
			dizi[i]=asci3;
		}	
			else if(sayi==3){
			dizi[i]=asci4;
		}	
			else if(sayi==4){
			dizi[i]=asci5;
		}
			else if(sayi==5){
			dizi[i]=asci6;
		}		
	}
	dizi[miktar]='\0';
	return dizi;
}

//Kelime sayisi ve kelimedeki min-max harf sayisini fonksiyonda alip rastgele cumle ureten fonksiyon. 
char* RastgeleCumle(RastgeleKarakter rk,int kelimesayisi,int maxkelimeharf,int minkelimeharf){
	int x=0;
	int gecmistoplam=0;
	char *dizi = (char*)malloc(sizeof(char)*x);
	
	for (int i = 0; i < kelimesayisi; i++){
		unsigned yenisayi = RandomSayi(rk->rand)%maxkelimeharf;
		if(yenisayi<minkelimeharf){
			yenisayi=minkelimeharf;
		}
		gecmistoplam=gecmistoplam+yenisayi;
		dizi[x]=' ';
			for (int x=(gecmistoplam-yenisayi+1); x <gecmistoplam; x++){
				dizi[x] = RandomKarakter(rk);
			}
				x=gecmistoplam;
	}
	dizi[x]='\0';
	return dizi;
}

// Sinifi yokeden fonksiyon
void RastgeleKarakterSinifYoket(RastgeleKarakter rk){
	if(rk == NULL) return;
	free(rk->rand);
	rk->rand = NULL;
	free(rk);
	rk = NULL;
}