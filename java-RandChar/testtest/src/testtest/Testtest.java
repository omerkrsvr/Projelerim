/**
*
* @author Omer Kirsever omer.kirsever@ogr.sakarya.edu.tr , Batuhan Ucan batuhan.ucan@ogr.sakarya.edu.tr
* @since 16.03.2019
* Rastgele karakter ve kelimeler uretebilen kutuphanenin test kodlari.
* 
*/
package testtest;

import paket.RastgeleKarakter;

public class Testtest {
    public static void main(String[] args) {
      RastgeleKarakter RK = new RastgeleKarakter(); //Kutuphaneyi kullanabilmek icin nesne tanimlandi. 
        
        System.out.println("Rastgele harf : "+ RK.RastgeleHarf()); //Tekli basim icin kullandıgım genel method
        System.out.println("Rastgele harf : "+ RK.RastgeleHarf());
        
        // Burada rastgele ve yazilan adet kadar karakter basiyoruz.  
        System.out.print("Rastgele 3 Karakter: ");
        System.out.println(RK.SayiliRastgele(3));   // karakter adedi 
        System.out.print("Rastgele 5 Karakter: ");
        System.out.println(RK.SayiliRastgele(5));   // karakter adedi 
        
        //Burada verilen iki karakater arasindaki karakterleri istenilen adet kadar basiyoruz. 
        System.out.print("Verilen iki Karakter (a,k): ");
        System.out.println(RK.AralikliRastgele(97,107,1));  //(ilkharf, sonharf, basilacak karakter miktari)
        System.out.print("Verilen iki Karakter (B,M): ");
        System.out.println(RK.AralikliRastgele(66,77,2));   //(ilkharf, sonharf, basilacak karakter miktari)
        
        //Burada belirtilen karakterleri istenilen miktarda basiyoruz.
        System.out.print("Belirtilen Karakterler (g,y,u,c,n,e): " );
        System.out.println(RK.BelirtilenKarakter(1,103,121,117,99,110,101)); //Belirtilen karakterlerden kac adet karakter basilacak ve basilacak harflerin ASCII kodlari.
        System.out.print("Belirtilen Karakterler (g,y,u,c,n,e): " );
        System.out.println(RK.BelirtilenKarakter(1,103,121,117,99,110,101)); //Belirtilen karakterlerden kac adet karakter basilacak ve basilacak harflerin ASCII kodlari.
        System.out.print("Belirtilen Karakterler (g,y,u,c,n,e): " );
        System.out.println(RK.BelirtilenKarakter(3,103,121,117,99,110,101)); //Belirtilen karakterlerden kac adet karakter basilacak ve basilacak harflerin ASCII kodlari.
        
        //Burada verilen kelime sayisi uzunlugunda rastgele cumle basiyoruz.
        System.out.print("Rastgele Cümle: " );
        System.out.println(RK.CumleKur(10,4,8)); // (Cumledeki kelime sayisi, kelimedeki minharfsayisi , maxharfsayisi)
    }
    
}
