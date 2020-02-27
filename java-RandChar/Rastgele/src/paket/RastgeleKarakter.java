/**
*
* @author Omer Kirsever omer.kirsever@ogr.sakarya.edu.tr , Batuhan Ucan batuhan.ucan@ogr.sakarya.edu.tr
* @since 16.03.2019
* Rastgele karakter ve kelimeler uretebilen kutuphanenin test kodlari.
* 
*/
package paket;


public class RastgeleKarakter {
    int sayi;
    char harf;
    int yenisayi=0;
    public char RastgeleHarf(){  //tek karakter basmasi icin
        
        sayi = (int)System.nanoTime(); // System saatini int sayi degiskenine atiyoruz.
        if(sayi<0) // System saati bazen negatif cikiyor. Onu pozitife ceviriyoruz.
        {             
            sayi=sayi*(-1);   
        } 
        // Buyuk kucuk harf rastgele bassin diye ilk mod 2 aliyoruz. Ordan gelen sayi 0 ise buyuk harf 1 ise kucuk harf. 
        if(sayi%2==0)  
        {  
            sayi=(sayi% 26)+65;      // Burada buyuk harf basiliyor.
            harf = (char)sayi;      
        }
        else
        {
            sayi=(sayi% 26)+97;      //Burada ise kucuk harf basiliyor.
             
        } 
         harf = (char)sayi;  
         return harf;
    } 

    public String SayiliRastgele(int adet){ // fonksiyondaki adet miktari kac tane sayi basilicak adeti
        String a = "";
        for(int x=0;x<adet;x++)
        {
            a += RastgeleHarf();// ustteki ana fonksiyon cagiriliyor.
        }
        return a ;
    }
    
    public String AralikliRastgele(int ilkharf, int sonharf,int adet){ 
        String a = "";
        char b;
       // Verilen ascii sayilari arasinda verilen adet kadar harf basma
      int ilkharf2 = ilkharf+1; // Verilen ilk harfin ve son harfin haricinde, icindeki harfleri yazmasi icin.
      int aralik=0;
      for(int x=0;x<adet;x++){ //kac tane harf basilacaksa o kadar for donduruyor.
      sayi = (int)System.nanoTime();
      if(sayi<0)
      {
          sayi=sayi*(-1);
      } 
      aralik=(sonharf-ilkharf2); // O iki harf arasinda kac tane harf oldugunu ogreniyoruz.
      sayi=(sayi % aralik)+(ilkharf2); // sayiyi araliga modunu alarak ilk girilen harf+1 ile toplayip yeni sayi uretiyoruz.
      harf=(char)sayi;          //sayiyi chara ceviriyoruz. 
      a += harf;
      //System.out.print(harf);    //harfi yazdiriyoruz.
      }
      return a;
    }
    
    public String BelirtilenKarakter(int adet,int a,int b,int c,int d,int e,int f){ 
        String z = "";
        // verilen adet ve girilen asciiler arasinda sayi yazdirma
      for(int x=0;x<adet;x++) // girilen adet kadar for döndürme
      {
        sayi = (int)System.nanoTime();// System saatini int sayi degiskenine atiyoruz.
        if(sayi<0)// System saati bazen negatif cikiyor. Onu pozitife ceviriyoruz.
        {
            sayi=sayi*(-1);
        } 
        sayi=(sayi%6); 
        // sayiyi girilen sayi adetinde mod alıp mod degerine karsılık gelen sirayi yazdiriyoruz.
            if(sayi==0)
            {
                sayi=a;
            }
            else if(sayi==1)
            {
                sayi=b;
            }
            else if(sayi==2)
            {
                sayi=c;
            }
            else if(sayi==3)
            {
                sayi=d;
            }
            else if(sayi==4)
            {
                sayi=e;
            } 
            else if(sayi==5)
            {
                sayi=f;
            }
        harf=(char)sayi;
        //System.out.print(harf);
        z += harf;
      }
      return z;
    }   
    public String CumleKur(int kelimesayisi,int minkelimeharf, int maxkelimeharf){
        String a = "";
      //Fonksiyonda cumledeki kelime sayisi, kelimedeki min harf ve max harf sayisi aliniyor.
        for(int x=0;x<kelimesayisi;x++) //yazilacak kelime sayisi kadar for dongusu
        {
            yenisayi = (int)System.nanoTime(); // aynı sistem saati islemleri 
                if(yenisayi<0)
                {
                    yenisayi=yenisayi*(-1);
                } 
            yenisayi=(yenisayi%maxkelimeharf); // sistem saati basilacak maxkelime uzunlugunla modu aliniyor.
                if(yenisayi<minkelimeharf) //eger sayi girilen min harften kucukse degeri min harfe eşitliyor. 
                {
                    yenisayi=minkelimeharf; // yani min harf sayisindan daha az harfli kelime uretmemek icin
                }
                    for(int y=0;y<yenisayi;y++) // daha sonra o sayi kadar harf basiyor bosluk bırakıyor üstteki fora giriyor.
                    {
                        a += RastgeleHarf(); //ustteki daha once hazirladigimiz ana fonksiyonu kullaniyoruz. 
                    }
                    a += " ";
        } 
         return a ;
    }     
    
}
