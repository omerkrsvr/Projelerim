/**
*
* @author Omer Kirsever omer.kirsever@ogr.sakarya.edu.tr
* @since 21.04.2019
* Rastgele karakter ve kelimeler uretebilen c kutuphanesinin test kodlari.
* 
*/
#include "RastgeleKarakter.h"

int main(){
	RastgeleKarakter rastkarakter = RastgeleKarakterSinifOlustur(); //RastgeleKarakter sinifinden rastkarakter isminde sinif.
	
		printf("Rastgele Karakter: %c\n", RandomKarakter(rastkarakter)); //Rastgele bir karakter
		printf("Rastgele Karakter: %c\n", RandomKarakter(rastkarakter)); //Rastgele bir karakter
		printf("Rastgele 3 Karakter: %s\n", SayiliRandomKarakter(rastkarakter,3)); //Rastgele uc karakter
		printf("Rastgele 5 Karakter: %s\n", SayiliRandomKarakter(rastkarakter,5)); //Rastgele bes karakter
		printf("Verilen iki aralik(a,f) %c\n", AralikliRastgele(rastkarakter,'a','f')); //Verilen aralik arasinda random karakter
		//Verilen aralik arasinda random istenilen miktarda karakter
		printf("Verilen iki aralik(E,Z) %s\n", SayiliAralikliRastgele(rastkarakter,'E','Z',3)); 
		//Fonksiyon icinde verilen charlar arasinda rastgele istenilen miktarda random karakter.
		printf("Belirtilen Karakter (g,y,u,c,n,e) : %s\n", BelirtilenKarakterler(rastkarakter,1,'g','y','u','c','n','e'));
		printf("Belirtilen Karakter (g,y,u,c,n,e) : %s\n", BelirtilenKarakterler(rastkarakter,2,'g','y','u','c','n','e'));
		printf("Belirtilen Karakter (g,y,u,c,n,e) : %s\n", BelirtilenKarakterler(rastkarakter,3,'g','y','u','c','n','e'));
		//Tekrar edilmedigi anlasilsin diye 100 adet random karakter.
		printf("Rastgele 100 Karakter: %s\n", SayiliRandomKarakter(rastkarakter,100));
		//Fonksiyon icinde (Cumlede istenen kelime sayisi,kelimedeki min ve max harf sayisi)alarak random rastgele cumle.
		printf("Rastgele Cumle:%s\n", RastgeleCumle(rastkarakter,7,8,5));
    RastgeleKarakterSinifYoket(rastkarakter);// Sinifin yikici fonksiyonu.
	return 0;
}