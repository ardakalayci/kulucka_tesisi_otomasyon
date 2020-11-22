#include<iostream>
#include <unistd.h>
#include<string>  
#include <fstream>
#include <ctime>

using namespace std;  
//Çiftlik Sýnýfý
class Ciftlik {    	   	
  public:     
 
  int ordek=0;
  int kaz=0;
  int tavuk=0;
  int bildircin=0;   
  int ordekS,kazS,tavukS,bildircinS;   
//Kuluçka Makinesine Eklenmiþ Yumurta Sayýlarýný Veren Fonksiyon
    void tum_yumurtalar() {

system("cls");
printf("Ördek Kuluçkasý : %d\nKaz Kuluçkasý : %d\nTavuk Kuluçkasý : %d \nBýldýrcýn Kuluçkasý : %d\n\n",ordek,kaz,tavuk,bildircin);
printf("Menüye Dönmek Ýçin Bekleyin");
sleep(2);
menu();
    }
    //Kuluçka Makinelerine Yumurta Eklemek Ýçin Kullanýlarn Fonksiyon
    void yumurta_ekle(){
    system("cls");
   int menu_secim;
   printf("Kuluçka Makinesi Yumurta Ekle \n\n1 : Tavuk\n2 : Ördek\n3 : Kaz\n4 : Býldýrcýn\n5 : Üst Menüye Dön\n\nMenü Seçiminizi Yapýnýz : ");
   scanf("%d",&menu_secim);
   switch(menu_secim){
   	case 1:
   	printf("Adeti Giriniz : ");
    scanf("%d",&tavuk);
	printf("%d Tacuk Eklendi",tavuk);
   		       			   		       			sleep(1);

menu();
   		break;
   		
   	case 2:
   	printf("Adeti Giriniz : ");
   	scanf("%d",&ordek);
   	printf("%d Ördek Eklendi",ordek);
   	sleep(1);

menu();

   		break;
	   
   	case 3:
   	printf("Adeti Giriniz : ");
   	scanf("%d",&kaz);
	printf("%d Kaz Eklendi",kaz);
   		       			   		       			sleep(1);

menu();
   		break;
   		
   	case 4:
   	printf("Adeti Giriniz : ");
   	scanf("%d",&bildircin);
	printf("%d Býldýrcýn Eklendi",bildircin);
   		       			   		       			sleep(1);

menu();
   		break;
		   
	case 5:
		
		menu();
   		break;	
   }
    	
	}
    //Ana Menü
    void menu(){
   	
    system("cls");
    int menu_secim;
   printf("Kuluçka Tesisi Otomasyonu \n\n1 : Tüm Yumurtalar\n2 : Yumurta Giriþi Yap\n3 : Sayaçlarý Baþlat\n\nMenü Seçiminizi Yapýnýz : ");
   scanf("%d",&menu_secim);
   switch(menu_secim){
   	case 1:
tum_yumurtalar();
   		break;
   		
   	case 2:
	yumurta_ekle();   		
	break;
	   
   	case 3:
   		sayacBasla();
   		break;
   		
   	case 4:
   		break;	
   }
    	
	}
    //Kuluçka Süresi Bittikten Sonra Çalýþtýrýlan Fonksiyon
	void kuluckaBitti(){
		//zaman modülü ekledim
	time_t tt;
    time( &tt );
    tm TM = *localtime( &tt );
		    	ofstream rapor;
    	system("cls");
//dosya açar yoksa oluþturur
    	rapor.open ("kuluckaRaporu.txt");
    	
    	//rapor yazdýrýr
    	rapor << ordek << " : Ördek" << endl 
		<< kaz << " : Kaz " << endl
				<< bildircin << " : Býldýrcýn" << endl
						<< tavuk << " : Tavuk " << endl <<endl<< "Kuluçka iþlemi baþarý ile gerçekleþti"<<endl<<endl<<"Saat : "<<TM.tm_hour<<" || Dakika : "<<TM.tm_min<<endl;


    	
    	int menu_secim;
   printf("Kuluçka Ýþlemi Bitti \n\nKuluçka Raporu Oluþturuldu\n1 : Menüye Dön\n2 : Tekrarla\n\n");
   printf("Tercihinizi Yapýn : ");

   scanf("%d",&menu_secim);
   switch(menu_secim){
   	case 1:
menu();
   		break;
   		
   	case 2:
   		sayacBasla();
   		break;
	   
	
   }
		
	}
	
//Ýþlem Karýþýklýðýný Önlemek Ýçin Gün sayan Fonksiyon
	void gunGec(){
tavukS >0 ? tavukS--:tavukS=0;
ordekS >0 ? ordekS--:ordekS=0;
bildircinS >0 ? bildircinS--:bildircinS=0; 	
	}
    
    
//Sayacý Baþlatan Fonks
    void sayacBasla(){
    	ordekS=32;
		kazS=36;
		tavukS=28;
		bildircinS=22;
    	if (kaz>0||tavuk>0||bildircin>0||ordek>0){
    		
    		for (kazS = 36; kazS >= 0; kazS--) {
    			//her gün 1 saniye olarak varsayýlmmýþtýr
    			sleep(1);
system("cls");
gunGec();
    			
kaz >0 ? kazS < 8 ? kazS != 0 ?
printf("\n\nKaz Kuluçkasý : %d || Kalan Gün :  %d  Nem Oranýný 80 Seviyelerine Getiriniz || Çatlamalar Baþlayacaktýr\n\n",kaz,kazS):
printf("\n\n%d KAZ Yumurtanýz Çýkýma Hazýr Çýkým Tepsisine Aktarýnýz\n\n",kaz):
printf("\n\nKaz Kuluçkasý : %d || Kalan Gün :  %d\n\n",kaz,kazS):
printf("\n\nKaz Kuluçkasý : 0 || Kalan Gün :  Yeterli Yumurta Bulunmadýðý Ýçin Hesaplanamýyor\n\n");


ordek >0 ? ordekS < 13 ? ordekS != 0 ? 
printf("Ördek Kuluçkasý : %d || Kalan Gün :  %d  Spray Yardýmý Ýle Yumurtalarý Nemlendiriniz || Çatlamalar Baþlayacaktýr\n\n",ordek,ordekS):
printf("%d ÖRDEK Yumurtanýz Çýkýma Hazýr Çýkým Tepsisine Aktarýnýz\n\n",ordek):
printf("Ördek Kuluçkasý : %d || Kalan Gün :  %d\n\n",ordek,ordekS):
printf("Ördek Kuluçkasý : 0 || Kalan Gün :  Yeterli Yumurta Bulunmadýðý Ýçin Hesaplanamýyor\n\n");



tavuk >0 ? tavukS < 6 ? tavukS != 0 ? 
printf("Tavuk Kuluçkasý : %d || Kalan Gün :  %d  Gün Ýçinde 1 Saat Boyunca Kuluçka Makinesini Soðutunuz|| Yaklaþýk Oda Sýcaklýðýnda\n\n",tavuk,tavukS):
printf("%d Tavuk Yumurtanýz Çýkýma Hazýr Çýkým Tepsisine Aktarýnýz\n\n",tavuk):
printf("Tavuk Kuluçkasý : %d || Kalan Gün :  %d\n\n",tavuk,tavukS):
printf("Tavuk Kuluçkasý : 0 || Kalan Gün :  Yeterli Yumurta Bulunmadýðý Ýçin Hesaplanamýyor\n\n");




bildircin >0 ? bildircinS < 16 ? bildircinS != 0 ?

printf("Býldýrcýn Kuluçkasý : %d || Kalan Gün :  %d  Gün Ýçinde 2 Kere Yumurtalarý Döndürün || Ýþlem Esnasýnda Yumurtalarýn Soðuða Maruz Kalmasýn\n\n",bildircin,bildircinS):
printf("%d Býldýrcýn Yumurtanýz Çýkýma Hazýr Çýkým Tepsisine Aktarýnýz\n\n",bildircin):
printf("Býldýrcýn Kuluçkasý : %d || Kalan Gün :  %d\n\n",bildircin,bildircinS):
printf("Býldýrcýn Kuluçkasý : 0 || Kalan Gün :  Yeterli Yumurta Bulunmadýðý Ýçin Hesaplanamýyor\n\n");


}	
		}
    	else {
    		printf("Kuluçka Makineleriniz Boþ");
		}
		kuluckaBitti();
	}
};

int main()
{
setlocale(LC_ALL,"Turkish"); //Türkçe karakter girdi çýktý alabilmek için
Ciftlik ciftlik;
ciftlik.menu();
}

 
