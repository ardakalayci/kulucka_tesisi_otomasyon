#include<iostream>
#include <unistd.h>
#include<string>  
#include <fstream>
#include <ctime>

using namespace std;  
//�iftlik S�n�f�
class Ciftlik {    	   	
  public:     
 
  int ordek=0;
  int kaz=0;
  int tavuk=0;
  int bildircin=0;   
  int ordekS,kazS,tavukS,bildircinS;   
//Kulu�ka Makinesine Eklenmi� Yumurta Say�lar�n� Veren Fonksiyon
    void tum_yumurtalar() {

system("cls");
printf("�rdek Kulu�kas� : %d\nKaz Kulu�kas� : %d\nTavuk Kulu�kas� : %d \nB�ld�rc�n Kulu�kas� : %d\n\n",ordek,kaz,tavuk,bildircin);
printf("Men�ye D�nmek ��in Bekleyin");
sleep(2);
menu();
    }
    //Kulu�ka Makinelerine Yumurta Eklemek ��in Kullan�larn Fonksiyon
    void yumurta_ekle(){
    system("cls");
   int menu_secim;
   printf("Kulu�ka Makinesi Yumurta Ekle \n\n1 : Tavuk\n2 : �rdek\n3 : Kaz\n4 : B�ld�rc�n\n5 : �st Men�ye D�n\n\nMen� Se�iminizi Yap�n�z : ");
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
   	printf("%d �rdek Eklendi",ordek);
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
	printf("%d B�ld�rc�n Eklendi",bildircin);
   		       			   		       			sleep(1);

menu();
   		break;
		   
	case 5:
		
		menu();
   		break;	
   }
    	
	}
    //Ana Men�
    void menu(){
   	
    system("cls");
    int menu_secim;
   printf("Kulu�ka Tesisi Otomasyonu \n\n1 : T�m Yumurtalar\n2 : Yumurta Giri�i Yap\n3 : Saya�lar� Ba�lat\n\nMen� Se�iminizi Yap�n�z : ");
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
    //Kulu�ka S�resi Bittikten Sonra �al��t�r�lan Fonksiyon
	void kuluckaBitti(){
		//zaman mod�l� ekledim
	time_t tt;
    time( &tt );
    tm TM = *localtime( &tt );
		    	ofstream rapor;
    	system("cls");
//dosya a�ar yoksa olu�turur
    	rapor.open ("kuluckaRaporu.txt");
    	
    	//rapor yazd�r�r
    	rapor << ordek << " : �rdek" << endl 
		<< kaz << " : Kaz " << endl
				<< bildircin << " : B�ld�rc�n" << endl
						<< tavuk << " : Tavuk " << endl <<endl<< "Kulu�ka i�lemi ba�ar� ile ger�ekle�ti"<<endl<<endl<<"Saat : "<<TM.tm_hour<<" || Dakika : "<<TM.tm_min<<endl;


    	
    	int menu_secim;
   printf("Kulu�ka ��lemi Bitti \n\nKulu�ka Raporu Olu�turuldu\n1 : Men�ye D�n\n2 : Tekrarla\n\n");
   printf("Tercihinizi Yap�n : ");

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
	
//��lem Kar���kl���n� �nlemek ��in G�n sayan Fonksiyon
	void gunGec(){
tavukS >0 ? tavukS--:tavukS=0;
ordekS >0 ? ordekS--:ordekS=0;
bildircinS >0 ? bildircinS--:bildircinS=0; 	
	}
    
    
//Sayac� Ba�latan Fonks
    void sayacBasla(){
    	ordekS=32;
		kazS=36;
		tavukS=28;
		bildircinS=22;
    	if (kaz>0||tavuk>0||bildircin>0||ordek>0){
    		
    		for (kazS = 36; kazS >= 0; kazS--) {
    			//her g�n 1 saniye olarak varsay�lmm��t�r
    			sleep(1);
system("cls");
gunGec();
    			
kaz >0 ? kazS < 8 ? kazS != 0 ?
printf("\n\nKaz Kulu�kas� : %d || Kalan G�n :  %d  Nem Oran�n� 80 Seviyelerine Getiriniz || �atlamalar Ba�layacakt�r\n\n",kaz,kazS):
printf("\n\n%d KAZ Yumurtan�z ��k�ma Haz�r ��k�m Tepsisine Aktar�n�z\n\n",kaz):
printf("\n\nKaz Kulu�kas� : %d || Kalan G�n :  %d\n\n",kaz,kazS):
printf("\n\nKaz Kulu�kas� : 0 || Kalan G�n :  Yeterli Yumurta Bulunmad��� ��in Hesaplanam�yor\n\n");


ordek >0 ? ordekS < 13 ? ordekS != 0 ? 
printf("�rdek Kulu�kas� : %d || Kalan G�n :  %d  Spray Yard�m� �le Yumurtalar� Nemlendiriniz || �atlamalar Ba�layacakt�r\n\n",ordek,ordekS):
printf("%d �RDEK Yumurtan�z ��k�ma Haz�r ��k�m Tepsisine Aktar�n�z\n\n",ordek):
printf("�rdek Kulu�kas� : %d || Kalan G�n :  %d\n\n",ordek,ordekS):
printf("�rdek Kulu�kas� : 0 || Kalan G�n :  Yeterli Yumurta Bulunmad��� ��in Hesaplanam�yor\n\n");



tavuk >0 ? tavukS < 6 ? tavukS != 0 ? 
printf("Tavuk Kulu�kas� : %d || Kalan G�n :  %d  G�n ��inde 1 Saat Boyunca Kulu�ka Makinesini So�utunuz|| Yakla��k Oda S�cakl���nda\n\n",tavuk,tavukS):
printf("%d Tavuk Yumurtan�z ��k�ma Haz�r ��k�m Tepsisine Aktar�n�z\n\n",tavuk):
printf("Tavuk Kulu�kas� : %d || Kalan G�n :  %d\n\n",tavuk,tavukS):
printf("Tavuk Kulu�kas� : 0 || Kalan G�n :  Yeterli Yumurta Bulunmad��� ��in Hesaplanam�yor\n\n");




bildircin >0 ? bildircinS < 16 ? bildircinS != 0 ?

printf("B�ld�rc�n Kulu�kas� : %d || Kalan G�n :  %d  G�n ��inde 2 Kere Yumurtalar� D�nd�r�n || ��lem Esnas�nda Yumurtalar�n So�u�a Maruz Kalmas�n\n\n",bildircin,bildircinS):
printf("%d B�ld�rc�n Yumurtan�z ��k�ma Haz�r ��k�m Tepsisine Aktar�n�z\n\n",bildircin):
printf("B�ld�rc�n Kulu�kas� : %d || Kalan G�n :  %d\n\n",bildircin,bildircinS):
printf("B�ld�rc�n Kulu�kas� : 0 || Kalan G�n :  Yeterli Yumurta Bulunmad��� ��in Hesaplanam�yor\n\n");


}	
		}
    	else {
    		printf("Kulu�ka Makineleriniz Bo�");
		}
		kuluckaBitti();
	}
};

int main()
{
setlocale(LC_ALL,"Turkish"); //T�rk�e karakter girdi ��kt� alabilmek i�in
Ciftlik ciftlik;
ciftlik.menu();
}

 
