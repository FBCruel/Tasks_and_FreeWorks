#include <stdio.h>
#include <locale.h>
#include <string>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>


void bildirim (void);

void GirisSistemi(char *);

void AnaMenu(char *,int *);

void OduncAlma(char *,int *);

void QRkod();

void Kutuphane(char *);

void Kutuphane2(char *);

void Kutuphane3(char *); 

void OzelDers(char *);

	int FizikDersi();
	int TurkceDersi();
	int KimyaDersi();
	int BiyolojiDersi();
	int MatematikDersi();
	int OdaSecimi();


void KartBaglama();

void Sistem();

void Hareket();

int Etkinlikler(int *pbakiye);

void KitapDegerlendirme(char *,int *);

void GeriDonusum();

int uyelik();

void RandevuSistemi();

void RandevuMesaj();

void Kafeterya(char *,int *);

void Siir();

void mesaj ();

void odemeBolumu();

int onlineSatis();

void Yazici(char *);

void Ayarlar ();

void Tanitim();
	


int main(){
	setlocale(LC_ALL, "Turkish"); 

	char kullaniciAdi[10];
	int kullaniciBakiye=250;
	int secim;
	int girisYeniden=1;
	int menuYeniden=1;
	
	int cardnum, onlar, birler, yuzler, binler;
	do
	{
		printf("Kart numaranizin son 6 hanesini giriniz(ornek: 260798): ");
		scanf("%d",&cardnum); 	
	}while(cardnum<99999 || cardnum>1000000);
	
	birler = cardnum - ((cardnum / 10) * 10);
	onlar = cardnum - ((cardnum / 100) * 100);
	
	if(20 < onlar && onlar < 100)
	{
		printf("Kutuphaneye girisiniz uygundur...\n");
	}
	else if(0 <= onlar && onlar <= 20)
	{
		if(8 < birler && birler < 10)
		{
			printf("Girisiniz uygun degildir...");
			return 0;
		}
		else if(0 <= birler && birler <= 8);
		{
			if(0 <= onlar && onlar < 10)
				{
					printf("Girisiniz uygundur...\n");
				}
			else
			{
				printf("Girisiniz uygun degildir...");
				return 0;
			}
		}
	}

	while(girisYeniden==1)
	{
		GirisSistemi(kullaniciAdi); 
		girisYeniden++;
	}
	while(menuYeniden==1)
	{
		AnaMenu(kullaniciAdi,&secim);
	
		switch(secim){
			case 1:
				OduncAlma(kullaniciAdi,&kullaniciBakiye);
				break;
			case 2:
				QRkod();
				break;
			case 3:
				Kutuphane(kullaniciAdi);
				break;
			case 4: 
				Kutuphane2(kullaniciAdi);
				break;
			case 5:
				Kutuphane3(kullaniciAdi);
				break;
			case 6:
				OzelDers(kullaniciAdi);
				OdaSecimi();
				break;
			case 7:
				KartBaglama();
				break;
			case 8:
				Sistem();
				break;
			case 9:
				Hareket();
				break;
			case 10:
				Etkinlikler(&kullaniciBakiye);	
				break;
			case 11:
				KitapDegerlendirme(kullaniciAdi,&kullaniciBakiye);
				break;
			case 12:
				GeriDonusum();
				break;
			case 13:
				uyelik();
				break;
			case 14:
				RandevuSistemi();
  			  	RandevuMesaj();
    			break;
    		case 15:
    			Kafeterya(kullaniciAdi,&kullaniciBakiye);
    			Siir();
    			break;
    		case 16:
    			onlineSatis();
    			odemeBolumu();
				break;	
			case 17:
				Yazici(kullaniciAdi);
				Ayarlar();
				break;
			case 99:
				Tanitim();
				break;
				
	}	
		
		}
		
		printf("\n\nAna men�ye d�nmek i�in 1'i tu�lay�n�z ,��kmak i�in herhangi bir tu�a bas�n�z\n");
		scanf("%d",&menuYeniden);
	
	return 0;
}

/* G�R�� S�STEM� FONKS�YONLARI */
void GirisSistemi(char *pisim){
	
	int secim;
	
	printf("Sistemimize ho�geldiniz. \n[1]Giri� yap\n[2]Kay�t ol\n");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			printf("Ad�n�z� giriniz: ");
			scanf("%s",&*pisim);
			printf("�ifrenizi giriniz: ");
			scanf("%s");
			printf("Hesab�n�za giri� yap�lm�st�r");
			break;
			
		case 2:
			printf("Ad�n�z� giriniz: ");
			scanf("%s",&*pisim);
			printf("�ifrenizi belirleyiniz: ");
			scanf("%s");
			printf("Referans kodunu giriniz (iste�e ba�l�): ");
			scanf("%s");
			printf("Kayd�n�z ba�ar�yla ger�ekle�mi�tir ");
			break;
		default:
			break;
	}
	
}


/* ANA MEN� FONKS�YONLARI */
void AnaMenu(char *pisim,int *psecim){
	
	printf("\n\nHo�geldin %s\nSenin i�in yapabileceklerim:\n\n[1]Bookmatik (�d�n� alma sistemi)\n[2]QR Kod �le �d�n� Alma\n[3]My Bookself (Kitapl�k)\n[4]My Bookself 2\n[5]My Bookself 4\n[6]�zel ders\n"
	"[7]Kredi kart� baglama\n[8]Aktif Kullan�c�lar\n[9]Kart Hareketleri\n[10]Etkinlikler\n[11]Kitap De�erlendirme\n[12]Geri D�n���m\n[13]Uyelikler\n[14]Randevu Sistemi\n"
	"[15]Kafeterya\n[16]Onlinesatis\n[17]Yazici\n[99]Kutuphane tanitimi\n:",&*pisim);
	scanf("%d",&*psecim);
}

/* BOOKMAT�K FONKS�YONLARI */
void OduncAlma(char *pisim,int *pbakiye){
	
	int secim,secim2,secim3,secim4,durum,eskibakiye,tur1,tur2;
	
	printf("\n�d�n� alma merkezine ho�geldin %s \n1 - Bakiyeyi goruntule\n2 - Geri vermek\n3 - Odunc almak\n4 - Satin almak\n5 - Ana men�ye d�n\nSeciminizi yapin: ",&*pisim);
	scanf("%d",&secim);		
	switch(secim)
	{
		case 1 : 
				 printf("Bakiyeniz: %d TL\n\n",*pbakiye);		        
				 break;
		
		case 2 : system("CLS");
				 printf("1 -100 temel eser\n2 -Populer kultur\n3 -Geri Don\n");
			        scanf("%d",&secim4);
			        switch(secim4)
			        {
			 	      	case 1 : printf("Geri vereceginiz kitap\n 1 -Hasarli\n 2 -Hasarsiz\n");
			         			 scanf("%d",&tur1);
			         			 
			         			 switch(tur1)
			         			 {
			         			 	case 1 : printf("Kitap hasarli oldugu icin en yakin kutuphaneye yonlendiriliyorsunuz...\n\n");
			         			 			 break;
			         			 	case 2 : printf("Kitap hasarsiz oldugu icin basariyla alinmistir...\n\n");
			         			 			 break;
			         				default: printf("Yanlis giris yaptiniz\n");
						 		 }
						 		 break;
						case 2 : printf("Geri vereceginiz kitap\n 1 -Hasarli\n 2 -Hasarsiz\n");
			         			 scanf("%d",&tur2);
			         			 switch(tur2)
			         			 {
			         			 	case 1 : printf("Kitap hasarli oldugu icin en yakin kutuphaneye yonlendiriliyorsunuz...\n\n");
			         			 			 break;
			         			 	case 2 : printf("Kitap hasarsiz oldugu icin basariyla alinmistir...\n\n");
			         			 	       	 break;
			         				default: printf("Yanlis giris yaptiniz\n");
						 		 }
						 		 break;
						case 3 : printf("Ana sayfaya yonlendiriliyorsunuz...\n");
								 break;
						default: printf("Yanlis giris yaptiniz\n");
					 }
			         break;
			         
		case 3 : 
			while(1){
		          printf("1- 100 temel eser\n2 -Populer kultur\n3 -Geri Don\n");
				  printf("Odunc almak istediginiz kitap:  ");
				  scanf("%d",&secim3);
				  switch(secim3)
				  {
				 	case 1 : *pbakiye= *pbakiye;
				 	         printf("Kitap basariyla odunc alindi\nGuncel bakiyeniz: %d\n\n",*pbakiye);
				 	   		 break;
					case 2 : *pbakiye= *pbakiye;
				 	         printf("Kitap basariyla odunc alindi\nGuncel bakiyeniz: %d\n\n",*pbakiye);
				 	    	 break;	
					case 3 : printf("Ana sayfaya yonlendiriliyorsunuz...\n");
							 break;		 
					default: printf("Yanlis giris yaptiniz\n");
				  }         	
				  break;
			}
		case 4 : 
			while(1){
			  	 printf("1- 100 temel eser\n2 -Populer kultur\n3 -Geri Don\n");
				 printf("Almak istediginiz kitap:  ");
				 scanf("%d",&secim2);
				 switch(secim2)
				 {
				 	case 1 : *pbakiye= *pbakiye-20;
				 	         printf("Kitap basariyla satin alindi\nGuncel bakiyeniz: %d\n\n",*pbakiye);
				 	   		 break;
					case 2 : *pbakiye= *pbakiye-30;
				 	         printf("Kitap basariyla satin alindi\nGuncel bakiyeniz: %d\n\n",*pbakiye);
				 	    	 break;	
					case 3 : printf("Ana sayfaya yonlendiriliyorsunuz...\n");
						     break;		 
					default: printf("Yanlis giris yaptiniz\n");
				 }         	
	   		 break;
			}
		case 5: return;
			
		default:{
				 printf("\n\n-----------------------------\n\n");
			   	 printf("\n\n Yanlis secim yaptiniz!!\n\n");
			   	 printf("\n\n-----------------------------\n\n"); 
          		 break;
    	}
	}
}

void QRkod()
{
	
	int kontrol=0;
	int giris_no;
	int i, j;
	char kitap_adi[20];
	
	
	
	printf("\n\nQR kod ile kitap �d�n� alma sistemine ho� geldiniz. L�tfen giri� yap�n�z. \n\n\n\n");
		
	//��i bo� dikd�rtgen
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < 20; j++)
		{
    		if(i == 0 || i == 10-1 || j == 0 || j == 20-1)
				printf("#");

			else
				printf(" "); 
				        
   		}
		
		printf("\n");
		   	
	}	

	printf("\n\n");

	while(kontrol==0)
	{
		
		printf("\n[1]Giri� Yap\n[2]Ba�ka Bir Kitap Al\n[3]��k�� Yap\n\n");
	    scanf("%d",&giris_no);
	

		if(giris_no==1)
		{
			printf("\n\n");
		
			//��inde kare olan dikd�rtgen
			for (i = 1; i <= 10; i++)  
    		{ 
        
        		for (j = 1; j <= 20; j++) 
        		{ 
      
             
            		if ((i == 1 || i == 10 || j == 1 || j == 20) || (i >= 3 && i <= 10 - 2 && j >= 3 && j <= 20 - 2) && (i == 3 || i == 10 - 2 || j == 3 || j == 20 - 2)) 
            		{ 
                 
                		printf("#");  
            		}  
            		else
            		{ 
                
	                	printf(" ");  
            		} 
        		} 
			
				printf("\n"); 
    		} 

			printf("\n");
			printf("     SEF�LLER\n\n");
			printf("Sefiller kitab� 30.05.2020 tarihine (2 hafta) kadar hesab�n�za tan�mlanm��t�r. \n");
			printf("\nKayd�n�z ba�ar�yla ger�ekle�ti 'SEF�LLER' ");
			printf("\n\nBa�ka bir kitap almak ister misiniz? Bunun i�in giri� ekran�na tekrar d�n�n�z. \n");

		}
		
			
		else if(giris_no==2)
		{
		
			printf("\n\nL�tfen almak istedi�iniz kitab�n ad�n� giriniz: ");
			
			scanf("%c");
			gets(kitap_adi);
			printf("\n\n");
			//��inde kare olan dikd�rtgen
			for (i = 1; i <= 10; i++)  
    		{ 
        
        		for (j = 1; j <= 20; j++) 
        		{ 
      
             
            		if ((i == 1 || i == 10 || j == 1 || j == 20) || (i >= 3 && i <= 10 - 2 && j >= 3 && j <= 20 - 2) && (i == 3 || i == 10 - 2 || j == 3 || j == 20 - 2)) 
            		{ 
                 
                		printf("#");  
            		}  
            		else
            		{ 
                
	                	printf(" ");  
            		} 
        		}
				
				printf("\n"); 
				
    		}
			 
		printf("\n");
		printf("%s kitab� 13.06.2020 tarihine (2 hafta) kadar hesab�n�za tan�mlanm��t�r. \n", kitap_adi);
		printf("\nKayd�n�z ba�ar�yla ger�ekle�ti '%s' \n" , kitap_adi);
		printf("\nBa�ka bir kitap almak ister misiniz? Bunun i�in giri� ekran�na tekrar d�n�n�z. \n");

		}
	
	
		else if(giris_no==3)
		{
			printf("�yi g�nler dileriz...");
			exit (0);
		}
		
	
		else
		{
			printf("Yanl�� numara girdiniz! ");
		}
	
		printf("\n\nANA MENU'ye d�nmek i�in 0'a, �IKI� yapmak i�in herhangi bir tu�a bas�n�z: ");
		scanf("%d",&kontrol);
		
	}
	
	printf("\n�yi g�nler dileriz...");
	
}
/* MY BOOKSELF FONKS�YONLARI */
void Kutuphane(char *pisim){
	int c;
	   printf("Ki�isel k�t�phanene ho�geldin %c. L�tfen yapmak istedi�in i�lemi se�: \n");
	   printf(" [1]Okudu�um kitaplar\n [2]Okuyaca��m kitaplar\n [3]Hala okudu�um kitaplar\n");
	   scanf("%d",&c);
	 
		if(c==1)
     	{
	 		printf(" Okudu�um kitaplar:\n");
			printf(" 1)George Orwel-1984 \n 2)Cengiz Aytmatov-Beyaz Gemi \n 3)Stefan Zweig-Bilinmeyen bir kadinin mektubu \n 4)Dan Brown-Dijital Kale\n .\n .\n .\n");
    	}
 	
	    else if(c==2)
	   {
			printf(" Okuyaca��m kitaplar:\n");
			printf(" 1)Ayse Kulin-Turkan \n 2)Oguz Atay-Bir bilim adaminin romani: Mustafa Inan \n 3)Franz Kafka-Donusum\n .\n .\n .\n");
       }
	
    	else if(c==3)
       {
			printf(" Hala okudu�um kitaplar:\n");
			printf(" 1)Gustave Flaubert-Madam Bovary \n 2)Virginia Woolf-Mrs.Dalloway \n 3)Johann Wolfgang Von Goethe-Genc Werther'in Acilari\n .\n .\n .\n");	
       }
    
	   else
	   {
			printf("Hatal� numara girdiniz. Ana men�ye y�nlendiriliyorsunuz \n");
			
	   }
	 
	
}
	
/* MYbookself2 */

void Kutuphane2(char *pisim) 
{
	int select;
	int menu=0;
	int choice;
	while(menu==0)
	{
 	printf("Choose the function you want: \n");
 	printf(" [1]Books recommended for you\n [2]Search new books\n");
 	scanf("%d", &choice);
	
   	 if(choice==1)
	  {
		printf("This month recommended books for you:\n");
		printf(" 1)Antoine de Saint-The Little Prince\n 2)Dan Brown-The Da Vinci Code\n 3)Paulo Coelho-The Alchemist\n 4)Grigoriy Petrov\n .\n .\n .\n");
  	  }
  	  
  	  else if(choice==2)
  	  {
  	  	printf("Search new books: \n");
  	  	printf("Please select a category for search new books:\n [1]Science-fiction\n [2]Drama and Romantic Novels\n [3]Magazines and Articles\n .\n .\n .\n");
	    scanf("%d",&select);
	    
	    if(select==1)
	    {
	    	printf("Science-Fiction Category:\n");
	    	printf(" 1)George Orwel-1984\n 2)Andy Weir-The Martian\n .\n .\n .\n");
		}
		else if(select==2)
		{
			printf("Drama and Romantic Novels:\n");
			printf(" 1)Nicholas Sparks-The Notebook\n 2)Jane Austen-Emma\n .\n .\n .\n");
		}
		else if(select==3)
		{
			printf("Newspapers and Magazines:\n");
			printf(" 1)The New York Times\n 2)National Geographic Magazine\n .\n .\n .\n");
		}
		else
		{
			printf("You have entered a failed number. Please enter '0' to return the menu: \n");
		    scanf("%d",&menu);
		}
	  }
  	 else
	   {
		printf("You have entered a failed number. Please enter '0' to return the menu: \n");
		scanf("%d",&menu);
	   }
	 
	 printf(" Please enter '0' to return the menu: \n If you want to exit enter any number: \n");
	 scanf("%d",&menu);
   }
}
/*mybookself3*/
void Kutuphane3(char *pisim) {
	int num,num2,num3;
	int menu=0;
	while(menu==0)
	{
	printf("Please choose a category related to your search article: \n");
	printf(" [1]Scientific\n [2]General Culture\n [3]Academic\n [4]Health(physical or psychological)\n");
	scanf("%d",&num);
	
	if(num==1)
	{
		printf("Scientific Article: \n");
		printf("Please choose a topic related to scientific article: \n");
		printf(" [1]World and Space\n [2]Genome Technology\n");
		scanf("%d",&num2);
     		
		if(num2==1)
		{
			printf(" [1]To see the Article\n [2]Comments about this Article\n [3]Article's Writer\n");
			scanf("%d",&num3);
			
			if(num3==1)
			{
				printf("NASA and 'Kerbal Space Program' challenge gamers to recreate historic SpaceX launch to space station....\n");
			}
			else if(num3==2)
			{
				printf(" user121: This is amazing!!\n user26: Yeahh! I wanna go to NASA.\n");
			}
			else if(num3==3)
			{
				printf("by Kerbal Space Program\n");
			}
			else
			{
			  printf("You have entered a failed number. Please enter '0' to return the menu: \n");
		      scanf("%d",&menu);
			}
		}
		else if(num2==2)
		{
			printf(" [1]To see the Article\n [2]Comments about this Article\n [3]Article's Writer\n");
			scanf("%d",&num3);
			
			if(num3==1)
			{
				printf("Genome-wide screens reveal Escherichia coli genes ....\n");
			}
			else if(num3==2)
			{
				printf("userGen: It is so impressive!\n");
			}
			else if(num3==3)
			{
				printf("by Danish Piya");
			}
			else
			{
			  printf("You have entered a failed number. Please enter '0' to return the menu: \n");
		      scanf("%d",&menu);
			}
		}
		else
			{
			  printf("You have entered a failed number. Please enter '0' to return the menu: \n");
		      scanf("%d",&menu);
			}
	}
}
}

/* �ZEL DERS */
void OzelDers(char *pisim){
	int ekranSecim;
		
	printf("�zel Ders b�l�m�ne ho�geldin %s\nHangi dersten �zel ders istedi�inizi se�iniz (1-9)\n\t 1 : Matematik  \n\t 2 : Fizik \n\t 3 : T�rk�e \n\t 4 : Kimya \n\t 5 : Biyoloji \n...................",&*pisim);
	scanf("%d",&ekranSecim);
	
	switch (ekranSecim){
		
		case 1 :
			printf("\tMatematik dersini se�tiniz\n");
			MatematikDersi();
			break;			
		
		case 2 :
			printf("\tFizik  dersini se�tiniz\n");
			FizikDersi();
			break;
		
		case 3 :
			printf("\tT�rk�e dersini se�tiniz\n");
			TurkceDersi();
			break;
		
		case 4 :
			printf("\tKimya dersini se�tiniz\n");
			KimyaDersi();
			break;
		
		case 5 :
			printf("\tBiyoloji dersini se�tiniz\n");
			BiyolojiDersi();
			break;
		
		case 6 :
			printf("------------ dersini se�tiniz\n");
			break;
		
		default :
			printf("\tYanl�� say� tu�lad�n�z\n");
			break;
			
	
	}
}

int FizikDersi(){
	
	int secim;

	printf("Size uygun hocay� se�in\n--------------------------\n1_ Servet G�� \n2_ Fizikte G��");
	scanf("%d",&secim);
	while ( secim <0 || secim > 2){
		printf("Yanl�� tu�a bast�n�z l�tfen 1 ile 2 aras�nda bir se�im yap�n\n");
		scanf("%d",&secim);
	}
	if(secim == 1)
		printf("Servet G��\n");
	if(secim == 2)
		printf("Fizikte G��\n");
	
}

int TurkceDersi(){
	
	int secim;

	printf("Size uygun hocay� se�in\n--------------------------\n1_ Asiye Suba�� \n2_ Hatice Akman");
	scanf("%d",&secim);
	while ( secim <0 || secim > 2){
		printf("Yanl�� tu�a bast�n�z l�tfen 1 ile 2 aras�nda bir se�im yap�n\n");
		scanf("%d",&secim);
	}
	if(secim == 1)
		printf("Asiye Suba��\n");
	if(secim == 2)
		printf("Hatice Akman\n");
}

int KimyaDersi(){
	
	int secim;

	printf("Size uygun hocay� se�in\n--------------------------\n1_ Nagihan G�zeltepe \n2_ Can Akyurt");
	scanf("%d",&secim);
	while ( secim <0 || secim > 2){
		printf("Yanl�� tu�a bast�n�z l�tfen 1 ile 2 aras�nda bir se�im yap�n\n");
		scanf("%d",&secim);
	}
	if(secim == 1)
		printf("Nagihan G�zeltepe\n");
	if(secim == 2)
		printf("Can Akyurt\n");
}

int BiyolojiDersi(){
	
	int secim;

	printf("Size uygun hocay� se�in\n--------------------------\n1_ �zzet Sinler \n2_ H�lya Orta");
	scanf("%d",&secim);
	while ( secim <0 || secim > 2){
		printf("Yanl�� tu�a bast�n�z l�tfen 1 ile 2 aras�nda bir se�im yap�n\n");
		scanf("%d",&secim);
	}
	if(secim == 1)
		printf("�zzet Sinler\n");
	if(secim == 2)
		printf("H�lya Orta\n");
	
}

int MatematikDersi(){
	
	int secim;

	printf("Size uygun hocay� se�in\n--------------------------\n1_ Receb Gerid�nd� \n2_ Sadettin Jet");
	scanf("%d",&secim);
	while ( secim <0 || secim > 2){
		printf("Yanl�� tu�a bast�n�z l�tfen 1 ile 2 aras�nda bir se�im yap�n\n");
		scanf("%d",&secim);
	}
	if(secim == 1)
		printf("Receb Gerid�nd�\n");
	if(secim == 2)
		printf("Sadettin Jet\n");

}

int OdaSecimi(){
	
	
	int odasecimi;
	
	printf("Oda se�imine ho� geldiniz\n"
		   "Se�ilebilir odalar"
		   "1_ Grup odas�\n");
	scanf("%d",&odasecimi);
}

//////SISTEMDEN GERI DONUT GEREKLI OLDU�U ICIN SADECE VAR
void bildirim (void){
	
	
/// kod sahibi	https://stackoverflow.com/users/9530/adam-rosenfield
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);


	bool islem = false;
	int yil=tm.tm_year + 1900, ay=tm.tm_mon + 1, gun=tm.tm_mday,saat=tm.tm_hour, dakika=tm.tm_min, saniye=tm.tm_sec;
		
	//while(islem== true)
	
		while(islem==true)
	{
		time_t t = time(NULL);
		struct tm tm = *localtime(&t);
	
		
		if( (tm.tm_year + 1900)==yil && (tm.tm_mon + 1)==ay && (tm.tm_mday)==gun+10 && (tm.tm_hour)==saat )//10 g�n uyarisi
			{
				printf("Kitabinizin teslim tarihine 10 g�n kalmistir");
				break;
			}
		if( (tm.tm_year + 1900)==yil && (tm.tm_mon + 1)==ay && (tm.tm_mday)==gun+5 && (tm.tm_hour)==saat )//5 g�n uyarisi
			{
				printf("Kitabinizin teslim tarihine 5 g�n kalmistir");
				break;
			}		
			
		if( (tm.tm_year + 1900)==yil && (tm.tm_mon + 1)==ay && (tm.tm_mday)==gun+1 && (tm.tm_hour)==saat ) // deneme satiri (tm.tm_sec)==(saniye+3)) //1 g�n uyarisi
			{
				printf("Kitabinizin teslim tarihine 1 g�n kalmistir\n");
				break;
			}
		
    }		
	return;
}

void KartBaglama()
{
	int a;
	unsigned long long kredi, kkard;
	printf("Kredi kartinizi kutuphane kartinizla baglama islemine baslayalim...\n");
	printf("Ilk olarak 14 haneli kutuphane karti numaranizi giriniz(ornek: 16112020260798): ");
	//ilk 3 hane = ascii table 'a', 4. hane = bu parametreleri sa�layan ka��nc� ki�i, 2020 = kullan�c�n�n kay�t oldu�u y�l, 260798 = kullan�c�n�n g�n ay y�l format�nda do�um tarihi 
	// a = 161 = genel �yelik, b = 162 = okul �yeli�i, c = 163 = bireysel �yelik, d = 164 = grup �yeli�i, e = 165 = premium �yelik
	scanf("%llu",&kkard);
	printf("Son olarak 16 haneli kredi karti numaranizi giriniz(ornek: 4543590000000006): ");
	scanf("%llu",&kredi);
	printf("Iki karti birbirine baglamak uzeresiniz, bundan eminseniz 1'e degilseniz 2'ye ve ardindan ENTER'a basiniz: ");
	scanf("%d",&a);
	if(a == 1)
	{
		printf("\nIslem basariyla gerceklestirildi...\n");
	}
	else
	{
		printf("\nIslem sonlandirildi...\n");
	}	
}
void Sistem()
{
	unsigned long long kkard,pmt,pmss; // pmt = premium mert t�rkmen, pmss = premium melih seref sahin
	pmt=16512020200201;
	pmss=16512020180801;
	printf("Merhaba kutuphanemize hosgeldiniz...\nGiris icin 14 haneli kart numaranizi giriniz(ornek: 16112020260798):");
	scanf("%llu",&kkard);
	printf("Suanda kutuphanede bulunan misafirlerimiz:\n");
	printf("%llu Numarali Berke Cinar\n",kkard);
	printf("%llu Numarali Melih Seref Sahin\n",pmss);
	printf("%llu Numarali Mert Turkmen\n",pmt);
	printf("Iyi calismalar dileriz...\n");
}
void Hareket()
{
	int kutuicecek = 3, cips = 3;
	float cukulata=1.5, sicakicecek=2.5, ivirzivir=9;
	unsigned long long cardnum;
	printf("Satin alim gecmisiniz icin kutuphane kart numarinizi giriniz(ornek: 16112020260798): ");
	scanf("%llu",&cardnum);
	printf("Kutuphane Kantininden Satin Alma Gecmisiniz: \n");
	printf("Kutu icecek icin %d tl\nCips icin %d tl\nSicak icecek icin%5.2f tl\nToplam =%5.2f tl",kutuicecek,cips,sicakicecek,kutuicecek+cips+sicakicecek);
}


int Etkinlikler(int *pbakiye)
{		int secim;
		printf("\nK�t�phane etkinlik takvimi\n\t  1)A��k hava sinemasi\n\t  2)Konser&sergi\n\t  3)T�rkiye geneli deneme\n\t  4)Online canl� yay�nlar&teatalk\n\t  5)Kitap bulu�malar�\n\t  6)Konsept g�nler\n\t L�ften Rakam Girerek Seciniz (1/2/3/4/5/6): ");
		scanf("%d",&secim);
		
		
		//    SECIM KONTROL 
		while(secim <1 || secim > 6 )
	{
		printf("l�tfen tekrar rakam girerek se�iminiz yapin :");
		scanf("%d",&secim);			
	}
    	
    
		
			////  SECIMLER 
    	if (secim==1)
    	{
    		// a��k hava sinemas�
    		printf("\t A�ik hava sinemasi etkinli�ini se�tiniz \n\t 06.06.2020 saat 20.00 \n\t Rise of skywalker \n\t 20 tl");
			*pbakiye=*pbakiye-20;
			printf("\t biletiniz alinmistir \n\t g�ncel bakiyeniz :%d \n ",*pbakiye);
			printf("\t Baska bir islem yapmak istiyorsaniz 9 a \n\t istemiyorsan�z 8 e basiniz:");
			scanf("%d",&secim) ; 
		
		}
		
		else if( secim==2)
		{
			// konser ve sergi
			printf("\t Konser ve sergi etkinli�ini se�tiniz \n\t 07.06.2020 saat 21.00 \n\t twentyonepilots \n\t 100 tl  ");
			*pbakiye=*pbakiye-100;
			printf("\t biletiniz al�nm��t�r \n\t g�ncel bakiyeniz :%d \n ",*pbakiye);	 
			printf("\t Baska bir islem yapmak istiyorsaniz 9 a \n\t istemiyorsan�z 8 e basiniz:");
			scanf("%d",&secim) ; 
		}
		
		else if (secim==3)
		{
			//deneme s�nav�
			printf("\t T�rkiye geneli deneme \n\t 13.06.2020 saat 10.00 \n\t 15 tl ");
			*pbakiye=*pbakiye-15;   
			printf("\t S�nav i�in l�tfen ki�isel bilgilerinizi giriniz \n\t g�ncel bakiyeniz :%d \n ",*pbakiye);
			printf("\t Baska bir islem yapmak istiyorsaniz 9 a \n\t istemiyorsan�z 8 e basiniz:");
			scanf("%d",&secim) ; 
		}
		
		else if(secim==4)
		{
			//canl� yay�n & teatalk
			printf("\t Online canl� yay�nlar & tea talk \n\t Prof. Dr. Ali Demirsoy \n\t 14.06.2020 saat 16.00 \n\t Ustaca Ya�am \n\t 30 tl ");
			*pbakiye =*pbakiye-30;			
			printf("\t biletiniz al�nm��t�r \n\t g�ncel bakiyeniz :%d \n ",*pbakiye);
			printf("\t Baska bir islem yapmak istiyorsaniz 9 a \n\t istemiyorsan�z 8 e basiniz:");
			scanf("%d",&secim) ; 
		}
		
		else if (secim==5)
		{
			//yazarlarla bulu�ma
			printf("\t Kitap bulu�malar� \n\t 20.06.2020 10.00-17.00 \n\t yazarlarla bulu�ma imkan� \n");	
			printf("\t Baska bir islem yapmak istiyorsaniz 9 a \n\t istemiyorsan�z 8 e basiniz:");
			scanf("%d",&secim) ; 	       
		}
		
		else if (secim==6)
		{
			//konsept g�n
			printf("\t Konsept g�nler \n\t Breaking bad st�dyo \n\t 21.06.2020 \n\t Giri� 30 tl ");
			*pbakiye=*pbakiye-30;
			printf("\t biletiniz al�nm��t�r \n\t g�ncel bakiyeniz :%d \n ",*pbakiye);
			printf("\t Baska bir islem yapmak istiyorsaniz 9 a \n\t istemiyorsan�z 8 e basiniz:");
			scanf("%d",&secim) ; 			
		}
		if (secim==8)
		{
			printf("etkinlik takviminden ��k�� yapt�n�z ");
			return 0;
		}
		
		
			
		
}


void KitapDegerlendirme(char *pisim,int *pbakiye){
	
	int  kitapSecimi, yorumTercihi, begeniSayisi1=0, begeniSayisi2=0, begeniSayisi3=0, kitapPuan;
	char yorum1[200], yorum2[200], yorum3[200], tamamDevam='0';
	
	while(tamamDevam == '0'){
	
		printf("\n\nKitap inceleme sistemine ho�geldiniz %s ... \n\nL�tfen incelemek istedi�iniz kitab� se�iniz:\n[1] Tehlikeli Oyunlar\n[2] �eker Portakal�\n[3] Satran�\n...\n\n",&*pisim);
		scanf("%d",& kitapSecimi);
			
		if(kitapSecimi == 1){
			
			printf("\n'Tehlikeli Oyunlar' kitab� hakk�nda:\n[1]Yorumlara bak\n[2]Yorum yap\n[3]Puan ver\n\n");
			scanf("%d",& yorumTercihi);
			
			switch(yorumTercihi){
				
				case 1: 
				{
					printf("(kullan�c�100): �ok g�zel bir kitap.	[Be�en]\n\n\n(kullan�c�215): Okudu�um en etkileyici kitaplar�n ba��nda yer al�yor kendisi.\n\t\tBir anda hikayenin i�inde buluyorsunuz kendinizi.	[Be�en]\n\n\n(kullan�c�178): O�uz Atay'�n okudu�um en ak�c� ve zevkli kitab�.	[Be�en]");	
					break;
				}
				
				case 2:
				{
				
					printf("\nL�tfen yorumunuzu giriniz:");
					scanf("%c");
					gets(yorum1);
					printf("\nYorumunuz kaydedilmi�tir.\n\nYorumunuz: ");
					puts(yorum1);
					
					if (begeniSayisi1==1000){
						
						printf("\nTebrikler, bir yorumunuz topluluk taraf�ndan be�enildi. Hesab�n�za 2.00 tl eklenmi�tir");
						*pbakiye=*pbakiye+2;
					}
						
					break;
				}
				
				case 3: 
				{
					printf("\nL�tfen 1 ile 5 aras� puan veriniz: ");
					scanf("%d",&kitapPuan);
					
					while(kitapPuan<1 || kitapPuan>5){
						
						printf("\nGe�ersiz puan girdiniz. \nL�tfen tekrar deneyiniz: ");
						scanf("%d",&kitapPuan);
					}
					
					printf("\nYan�t�n�z kaydedilmi�tir. Te�ekk�rler...");
					break;
				}
				
				default : 
					printf("\nYanl�� numara girdiniz.");
					
			}
		}
			
		else if(kitapSecimi== 2){
			
			printf("\n'�eker Portakal�' kitab� hakk�nda:\n[1]Yorumlara bak\n[2]Yorum yap\n[3]Puan ver\n\n");
			scanf("%d",&yorumTercihi);
			
			switch(yorumTercihi){
				
				case 1: 
				{
					printf("(kullan�c�625): Herkesin okumas� gereken �ok g�zel ve dersler al�nmas� gereken bir kitap.	[Be�en]\n\n\n(kullan�c�894): Tek kelime ile m�kemmel bir kitap.	[Be�en]\n\n\n(kullan�c�285): Bu kitabi hayatim boyunca defalarca okuyacagim.	[Be�en]");	
					break;
				}
				
				case 2: 
				{
					printf("\nL�tfen yorumunuzu giriniz:");						
					scanf("%c");
					gets(yorum2);
					printf("\nYorumunuz kaydedilmi�tir.\n\nYorumunuz: ");
					puts(yorum2);
						
					if (begeniSayisi2==1000){
						
						printf("\nTebrikler, bir yorumunuz topluluk taraf�ndan be�enildi. Hesab�n�za 2.00 tl eklenmi�tir");
						*pbakiye=*pbakiye+2;
					}
						
					break;
				}
						
				case 3: 
				{
					printf("\nL�tfen 1 ile 5 aras� puan veriniz: ");
					scanf("%d",&kitapPuan);
					
					while(kitapPuan<1 || kitapPuan>5){
						
						printf("\nGe�ersiz puan girdiniz. L�tfen tekrar deneyiniz: ");
						scanf("%d",&kitapPuan);
					}
					
					printf("\nYan�t�n�z kaydedilmi�tir. Te�ekk�rler...");
					break;
				}
				
				default : 
					printf("\nYanl�� numara girdiniz.");

			}
		}
			
		else if(kitapSecimi== 3){
			
			printf("\n'Satran�' kitab� hakk�nda:\n[1]Yorumlara bak\n[2]Yorum yap\n[3]Puan ver\n\n");
			scanf("%d",&yorumTercihi);
			
			switch(yorumTercihi){
				case 1: 
				{
					printf("(kullan�c�326): Mutlaka okunmas� gereken etkileyici bir kitap.	[Be�en]\n\n\n(kullan�c�894): Git gide merak i�inde b�rakan ve bitirdi�inizde vay be dedirtecek bir eser.	[Be�en]\n\n\n(kullan�c�285): Sonu �ok havada bitti.	[Be�en]");	
					break; 
				}
						
				case 2:
				{
					printf("\nL�tfen yorumunuzu giriniz:");
					scanf("%c");
					gets(yorum1);
					printf("\nYorumunuz kaydedilmi�tir.\n\nYorumunuz: ");
					puts(yorum1);
						
					if (begeniSayisi3==1000){
							
						printf("\nTebrikler, bir yorumunuz topluluk taraf�ndan be�enildi. Hesab�n�za 2.00 tl eklenmi�tir");
						*pbakiye=*pbakiye+2;
					}
						
					break;
				}
						
				case 3: 
				{
					printf("\nL�tfen 1 ile 5 aras� puan veriniz: ");
					scanf("%d",&kitapPuan);
		
					while(kitapPuan<1 || kitapPuan>5){
			
						printf("\nGe�ersiz puan girdiniz. L�tfen tekrar deneyiniz: ");
						scanf("%d",&kitapPuan);
					}
				
					printf("\nYan�t�n�z kaydedilmi�tir. Te�ekk�rler...");
				
					break;
				}
				
				default : 
					printf("\nYanl�� numara girdiniz.");	
					
			}
		}
	
		else 
			printf("Yanl�� numara girdiniz.");
		
			
		do
		{	
			printf("\n\nANA MEN�'ye d�nmek i�in 0'a, �IKMAK i�in 9'a bas�n�z: ");
			scanf(" %c",&tamamDevam);
		
		}while(tamamDevam != '0' && tamamDevam != '9' );
	
	}
	
	printf("\n\n�yi g�nler dileriz...");
}

void GeriDonusum(){
	
	int ilSecim;
	float kagitMiktari;
	char tamamDevam;
	
	printf("\n\t\tGeri D�n���m Sistemine Ho�geldiniz .\n\n[1]Adana\n[2]Ad�yaman\n.\n.\n.\n.\n[6]Ankara\n.\n.\n.\n.\n[34]�stanbul\n.\n.\n.\n.\n\n");
	
	do
	{
	
		printf("\nDevam etmek i�in l�tfen bulundu�unuz ilin plakas�n� giriniz: ");
		scanf("%d",&ilSecim);
	}while(ilSecim < 1 || ilSecim > 81);
	
	switch(ilSecim){
		case 1:
			printf("\n\n\n\nAdana ilinde bulunan merkezlerimiz a�a��da s�ralanm��t�r:\n\n-Cemalpa�a Mahallesi, Toros Caddesi, No 29/A Seyhan/Adana\n-S�mer Mahallesi, �bo Osman Caddesi, Seyhan/Adana");
			break;
		case 2:
			printf("\n\n\n\nAd�yaman ilinde bulunan merkezlerimiz a�a��da s�ralanm��t�r:\n\n-Cumhuriyet Mahallesi, Haydar Efendi Caddesi, NO 204/A Merkez/Ad�yaman");
			break;
		case 6:
			printf("\n\n\n\nAnkara ilinde bulunan merkezlerimiz a�a��da s�ralanm��t�r:\n\n-Kocatepe Mahallesi, Selanik 2 Caddesi, No 70, �ankaya/Ankara\n-Bah�elievler Mahallesi, A�kaabat Caddesi, �ankaya/Ankara\n-P�narba�� Mahallesi, Sanatoryum Caddesi, No 221/B, Ke�i�ren/Ankara");
			break;
		case 34:
			printf("\n\n\n\n�stanbul ilinde bulunan merkezlerimiz a�a��da s�ralanm��t�r:\n\n-Molla Fenari Mahallesi, Vezirhan� Caddesi, No 53, Fatih/�stanbul\n-Osmana�a Mahallesi Yo�urt�u Park� Caddesi No: 24/1, Kad�k�y/�stanbul\n-Ac�badem Mahallesi, Ac�badem Caddesi, No 154/A, �sk�dar/�stanbul");
		default:
			break;
	}
	
	printf("\n\n\nSistemimizde 1000 gram ka��t at���na kar�� 0.80 tl verilir. \n");
	
	
	do{
		printf("\nL�tfen d�n��t�r�lecek ka��t a��rl���n� giriniz: ");
		scanf("%f",&kagitMiktari);
		kagitMiktari=(kagitMiktari*0.80)/1000;
		printf("Toplam fiyat = %.2f tl ",kagitMiktari);
		
		do
		{
		
			printf("\n\nTEKRAR DENEMEK i�in 1'e, �IKMAK i�in 9'a bas�n�z: ");
			scanf(" %c",&tamamDevam);
			
		}while(tamamDevam != '1' && tamamDevam != '9');
		
	}
	
	while (tamamDevam == '1' );
	printf("\n\n�yi g�nler dileriz...");
	
	

}

int uyelik()
{
	int uyelik_turu; // n = �yelik t�r�.
	int i=0;
	
	printf("1 - Genel uyelik\n2 - Okullara ozel uyelik\n3 - Bireysel calisma odalar� icin uyelik\n");
	printf("4 - Grup calisma odalari icin uyelik\n5 - Sureli premium uyelik secenekleri\n");
	
	do
	{
		printf("Uyelik tipini seciniz: ");
		scanf(" %d",&uyelik_turu);
		
		if (uyelik_turu == 1 && uyelik_turu == 5)
		{
			uyelik_turu = uyelik_turu - 32;
		}
	}
	while(uyelik_turu < 1 || uyelik_turu > 5);
	
	printf("kontrol ediliyor");
	for(i; i < 5; i++)
	{
		printf(".");
		sleep(1);
	}
	
	printf("\nOnaylandi. Iyi gunler dileriz.");
	
	return(uyelik_turu);
}
void RandevuSistemi()
{
    int yer;
    srand(time(NULL));
    char etkinlik[100];
 	unsigned long long uyelikKartNu;
  	int doluluk = 0, full;
  	int rdm1,rdm2,rdm3,rdm4,rdm5;
    
   
    printf("\t\nRANDEVU SISTEMI");
    int oda;
  
    
    do
	{
	   
    	printf("\n14 haneli uye numaranizi giriniz:");
    	scanf("%llu", &uyelikKartNu);
    
	}while(uyelikKartNu > 99999999999999 || uyelikKartNu < 10000000000000);
    
   	printf("\n14 haneli uye numaraniz: %llu",uyelikKartNu);
	
	rdm1 = rand() %50 + 1;
    rdm2 = rand() %20 + 1;
    rdm3 = rand() %100 + 1;
    rdm4 = rand() %30 + 1;
	
    
    printf("\t\n\nBireysel calisma odasi '1' (%d / 50 yer mevcuttur.)\t\nGrup calisma odasi '2' (%d / 20 yer mevcuttur.);\t\nToplu calisma odasi '3' (%d / 100 yer mevcuttur.)\t\nBilgisayarli calisma odasi '4' (%d / 30 yer mevcuttur.)\t\nEtkinlik randevusu '5' ", rdm1++,rdm2++,rdm3++,rdm4++);
    
	printf("\n\nLutfen randevu almak istediginiz odayi seciniz:");
    scanf("%d", &oda);
 
    if(rdm1 > 50 || rdm2 > 20 || rdm3 > 100 || rdm4 > 30)
	{
    	printf("Secmek istediginiz oda maalesef dolu.");
		return;
	}
    
    
	do
	{
   		switch(oda)
   		{
   		
      		case 1:		
   			    printf("\nBireysel calisma odasi= %d / 50 yer mevcuttur.",rdm1);
               	yer = rand() % 50 + 1;
               	printf("\t\nSize atanan yer numarasi : ***%d***\t",yer);
	          	return;
            
 	     	case 2:
       	    	printf("\nGrup calisma odasi= max 20 oda mevcuttur.");
           		printf("\nOdalar max 5 kisiliktir!");
               	yer = rand() % 20 + 1;
               	printf("\t\nSize atanan oda numarasi : ***%d***,\t %d / 20",yer,rdm2);
   				return;
            
   	    	case 3:
       			printf("\nToplu calisma odasi= max 100 yer mevcuttur.");
       	  		yer = rand() % 100 + 1;
           		printf("\t\nSize atanan yer numarasi : ***%d***,\t %d / 100",yer,rdm3);
           		return;
            
       		case 4:
       			printf("\nBilgisayarli calisma odasi= max 30 yer mevcuttur.");
       			yer = rand() % 30 + 1;
           		printf("\t\nSize atanan yer numarasi : ***%d***,\t %d / 30",yer,rdm4);
           		return;
			
			                 
       		case 5:
       			printf("\t\nEtkinlik Konseptiniz(tek kelime giriniz):");
           		scanf("%s", etkinlik);
       			printf("\t\nEtkinlik bilgileriniz: %s", etkinlik);
       			return;
            
       		default:
		           
				do
           		{
					printf("\nHatali islem yapildi!!! Lutfen 1-5 arasi islem giriniz: ");
					scanf(" %d", & oda);
							
				}while(oda < 1 || oda > 5);
        		
   		}

	}while(oda > 0 || oda < 6);
}

void RandevuMesaj()
{
	printf("\n\n\nKutuphanemizi tercih ettiginiz icin tesekkurler...");
	sleep(5);
}

void Kafeterya(char *pisim, int *pbakiye)
{
	 
	int number, secim1, secim5, fiyat=0;
	char ad[10], soyad[10];
	int secim2, secim3=1;
	int j;
	
	const char *yemekler[5] = { "Hamburger(Efkarlilara Ozel)", "Patates(Cabuk Kizaranlara Ozel)", "Pizza(Kafasi Karisiklara Ozel)", "Simit(Ankaralilara Ozel)", "Zeytinli Pogaca(Cabuk Doyanlara Ozel)" };
	const char *tatlilar[5] = { "Trilece(Annelerin Vazgecilmezi)", "Profiterol(Tarzini Begendim)", "Cikolatali Pasta(Hanimlarin Vazgecilmezi)", "Meyveli Pasta(Cocuklarin Vazgecilmezi)", "Sutlac(Beylerin Vazgecilmezi)" };
	const char *icecekler[7] = { "Su(Likir Likir Ic)", "Cay(Sicak Sicak Icini Isitir)", "Meyveli Soda(Cok Mu Yedin Al Bir Tane Rahatla)", "Ice Tea(Ne Cay Ne Meyve Suyu, Ikizler Insani Bayilir)", "Cola(Genclerin Vazgecilmezi)","Limonata(Naneli De Iyi Gider Ferah Ferah)","Portakal Suyu(Taze Taze Ic Keyfine Bak)"};
	
	int yemek_adet[5];
	yemek_adet [0] = 0;
	yemek_adet [1] = 0;
	yemek_adet [2] = 0;
	yemek_adet [3] = 0;
	yemek_adet [4] = 0;

	int tatli_adet[5];
	tatli_adet [0] = 0;
	tatli_adet [1] = 0;
	tatli_adet [2] = 0;
	tatli_adet [3] = 0;
	tatli_adet [4] = 0;
	
	int icecek_adet[7];
	icecek_adet [0] = 0;
	icecek_adet [1] = 0;
	icecek_adet [2] = 0;
	icecek_adet [3] = 0;
	icecek_adet [4] = 0;
	icecek_adet [5] = 0;
	icecek_adet [6] = 0;
		
	printf("\nSiir Cafe'ye hosgeldiniz... ");
	
	do{


		printf("\n\nLutfen BILGILENDIRMEYI OKUMAK icin 1'e, \nBILGILENDIRMEYI ATLAMAK icin 9'a tiklayiniz: ");
	
		scanf("%d",&secim5);
	
	}while((secim5 != 1) && (secim5 != 9));
	
	
	if(secim5==1)
	{	
		
		printf("\n\nBILGILENDIRME\n\nCafe'miz Self-Servis hizmet vermektedir. \nMENU TABLET'TEN sectiginiz siparislerinizi kutuphane uyelik kartinizla odeyebilirsiniz. \nEger kutuphane uyelik kartiniz yoksa tek kullanimlik manyetik kart ile de siparislerinizi verebilmeniz mumkun.\nOdeme yapmak icin tek yapmaniz gereken elinizdeki karti masadaki kart okutma cihazina yakinlastirmaktir.\nTemassiz akilli kartinizi cihaza yakinlastirdiktan sonra odeme gerceklesmis olacaktir.\nVerdiginiz siparisler hazir oldugunda MENU TABLET'te uyari isigi yanacak, uyari sesi calacaktir.\nUyarilari kapatmak icin MENU TABLET'te gorunecek olan 'OK' butonuna basmaniz yeterli olacaktir. \nSiparisi hazir olan musterimizin ismi MENU TABLET'ten gelen bildirimde yazacaktir.\n\nAfiyetli Dakikalar Dileriz...");
		sleep(10);
	}
	
		
	printf("\n\nSiparis vermek icin MENU TABLET'i kullanmaya baslayabilirsiniz.\n \n");
	

	
	

	for(;secim3==1;)
	{
		printf(" \nMENU; \n\n [1] YIYECEKLER \n [2] TATLILAR\n [3] ICECEKLER ") ;
		
		do
		{
			printf("\n\nLutfen siparis vermek icin numaralandirilan kategorilerden birini seciniz: ");
			scanf("%d", &secim1);
			
		}while(secim1<1 || secim1>3);
		
			
		if (secim1==1)
		{

			printf("\n [1.1] Hamburger(Efkarlilara Ozel)  16 TL \n [1.2] Patates(Cabuk Kizaranlara Ozel)  8 TL\n [1.3] Pizza(Kafasi Karisiklara Ozel)  18 TL\n [1.4] Simit(Ankaralilara Ozel)  2 TL\n [1.5] Zeytinli Pogaca(Cabuk Doyanlara Ozel)  3TL\n");
			
			do
			{
				printf("\n Lutfen siparis vermek icin numaralandirilan kategorilerden birini seciniz: 1.");
				scanf("%d", &secim2);
		
				if(secim2==1)
				{
					fiyat+=16;
					yemek_adet[0]++;
	
				}
			
				else if(secim2==2)
			
				{
					fiyat+=8;
					yemek_adet[1]++;
				}
					
				else if(secim2==3)
					
				{
					fiyat+=18;
					yemek_adet[2]++;
				}
						
				else if(secim2==4)
				
				{
					fiyat+=2;
					yemek_adet[3]++;
				}
					
				else if(secim2==5)
				
				{
					fiyat+=3;
					yemek_adet[4]++;
				}

			}while(secim2<1 || secim2>5);
			
			do
			{
			
				printf("\nSiparis vermeye DEVAM ETMEK icin 1'e,\nSiparisinizi IPTAL ETMEK icin 0'a,\nSiparisinizi SONLANDIRMAK icin 9'a tiklayiniz: ");
				scanf("%d",&secim3);
		
			}while(secim3<0 || secim3>1 && secim3<9 || secim3>9);
		
		
			if(secim3==0)
			{
				printf("\nSiparisiniz Iptal Edilmistir. \n");
				return;
			}
			
			else if(secim3==1)
			{
				printf("\nSiparisiniz Devam Etmektedir.\n\n");
			}
			
			else if (secim3==9)
			{
				printf("\nSiparisiniz Sonlandirilmistir.\n");
			}
		
				
		}
		
		else if(secim1==2)
		{
			printf("\n [2.1] Trilece(Annelerin Vazgecilmezi)  8 TL\n [2.2] Profiterol(Tarzini Begendim)  9 TL\n [2.3] Cikolatali Pasta(Hanimlarin Vazgecilmezi)  12 TL\n [2.4] Meyveli Pasta(Cocuklarin Vazgecilmezi)  12 TL\n [2.5] Sutlac(Beylerin Vazgecilmezi)  7 TL\n");
			do
			{
				printf("\n Lutfen siparis vermek icin numaralandirilan kategorilerden birini seciniz: 2.");
				scanf("%d", &secim2);
					
				if(secim2==1)
				{
					fiyat+=8;
					tatli_adet[0]++;
				}
							
				else if(secim2==2)
					
				{
					fiyat+=9;
					tatli_adet[1]++;
				}
					
				else if(secim2==3)
				{
					fiyat+=12;
					tatli_adet[2]++;
				}
				
				else if(secim2==4)
				{
					fiyat+=12;
					tatli_adet[3]++;
				}
			
				else if(secim2==5)
					
				{
					fiyat+=7;
					tatli_adet[4]++;
				}
			}while(secim2<1 || secim2>5);

		
			do
			{
			
				printf("\n\nSiparis vermeye DEVAM ETMEK icin 1'e\nSiparisinizi IPTAL ETMEK icin 0'a,\nSiparisinizi SONLANDIRMAK icin 9'a tiklayiniz: ");
				scanf("%d",&secim3);
			
			}while(secim3<0 || secim3>1 && secim3<9 || secim3>9);
		
		
			if(secim3==0)
			{
				printf("\nSiparisiniz Iptal Edilmistir. \n");
				return;
			}
			
			else if(secim3==1)
			{
				printf("\nSiparisiniz Devam Etmektedir.\n\n");
			}
			
			else
			{
				printf("\nSiparisiniz Sonlandirilmistir.\n");
			}
			
		
		}
				
		else if(secim1==3)
		{
			printf("\n [3.1] Su(Likir Likir Ic)  1 TL\n [3.2] Cay(Sicak Sicak Icini Isitir) 2 TL\n [3.3] Meyveli Soda(Cok Mu Yedin Al Bir Tane Rahatla)  3 TL\n [3.4] Ice Tea(Ne Cay Ne Meyve Suyu, Ikizler Insani Bayilir)  5 TL\n [3.5] Cola(Genclerin Vazgecilmezi)  5 TL\n [3.6] Limonata(Naneli De Iyi Gider Ferah Ferah)  6 TL\n [3.7] Portakal Suyu(Taze Taze Ic Keyfine Bak)  6 TL\n");
			
			do
			{
				printf("\n Lutfen siparis vermek icin numaralandirilan kategorilerden birini seciniz: 3.");
				scanf("%d", &secim2);
							
				if(secim2==1)
				{
					fiyat+=1;
					icecek_adet[0]++;
				}
					
				else if(secim2==2)
						
				{
					fiyat+=2;
					icecek_adet[1]++;
				}
				
				else if(secim2==3)
				{
					fiyat+=3;
					icecek_adet[2]++;	
				}
					
				else if(secim2==4)
				{
					fiyat+=5;
					icecek_adet[3]++;	
				}
			
				else if(secim2==5)
				{
					fiyat+=5;
					icecek_adet[4]++;
				}
				
				else if(secim2==6)
				{
					fiyat+=6;
					icecek_adet[5]++;		
				}
					
				else if(secim2==7)
				{
					fiyat+=6;
					icecek_adet[6]++;	
				}							
			}while(secim2<1 || secim2>7);
					
			do
			{			
						
				printf("\nSiparis vermeye DEVAM ETMEK icin 1'e\nSiparisinizi IPTAL ETMEK icin 0'a,\nSiparisinizi SONLANDIRMAK icin 9'a tiklayiniz: ");
				scanf("%d",&secim3);
				
			}while(secim3<0 || secim3>1 && secim3<9 || secim3>9);
			
		
			if(secim3==0)
			{
				printf("\nSiparisiniz Iptal Edilmistir. \n");
				return;
			}
			
			else if(secim3==1)
			{
				printf("\nSiparisiniz Devam Etmektedir.\n\n");
			}
			
			else
			{
				printf("\nSiparisiniz Sonlandirilmistir.\n");
			}
				
		}	
			
	}
	
	
	sleep(2);
	
	printf("\n\nSIPARISLERINIZ: \n\n");
	
	
	
	for(int i = 0; i < 5; i++ )
	{
		if (yemek_adet[i] != 0)
		{
			printf("%s  Adet : %d\n",yemekler[i], yemek_adet[i]);
		}		
	}			
	
	for(int j = 0; j < 5; j++ )
	{
		if (tatli_adet[j] != 0)
		{
			printf("%s  Adet : %d\n",tatlilar[j], tatli_adet[j]);
		}
	}
	
	for(int k = 0; k < 7; k++ ) 
	{
		if (icecek_adet[k] != 0)
		{
			printf("%s  Adet : %d\n",icecekler[k], icecek_adet[k]);
		}
	}	




	printf("\nOdemeniz Gereken Toplam Tutar: %d TL",fiyat);
	
	sleep(4);
	
	printf("\n\n\nOdeme yapmak icin lutfen kartinizi okutunuz... ");
	
	sleep(5);
	
	printf("\n\nKart Okuma Basarili");
	
	*pbakiye=*pbakiye-fiyat;
	
	sleep(2);
	
	printf("\n\nSiparisleriniz hazirlaniyor Sevgili %s ...\n\n",&*pisim);
	
	sleep(4);

}


void Siir ()
{
	int secim4;
	char gorus[100];
	
	sleep(2);
	
	printf("\nGorusleriniz bizim icin onemlidir.\nDilerseniz buraya Sikayet ve Oneriler'inizi yazabilirsiniz: ");
	
	scanf("%c");
	gets(gorus);
	
	printf("\n\nGorusleriniz dikkate alinacaktir.\nTesekkur Ederiz...");
	
	sleep(2);
	
	printf("\n\nSizi guzel bir siirle ugurlamak isteriz...");
	
	sleep(2);
	
	printf("\n\nGunun siirini kendiniz belirlemeye ne dersiniz?\n");
	
	sleep(2);
	
	do
	{
	
		printf("\n\nGunun siirini okumak icin aklinizdan 1-10 arasinda bir sayi tutun.");
	
		sleep(2);
		
		printf("\n\nLutfen tuttugunuz sayiyi buraya girin: ");
	
		scanf("%d",& secim4);
	
		if(secim4==1)
		{
			printf("\n\nCAY SIMIT VE PEYNIR\n\nBasit yasayacaksin basit,\nMesela, susayinca, su icecek kadar basit. \nDort cikacak, ikiyle ikiyi carptiginda. \nTek dugmesi olacak elindeki cihazin, \nTek bir dugme, tek bir cumle gibi. \nSevince, lafi dolandirmadan soyleyeceksin, \nSeni seviyorum gibi. \nBasit bir opucuk yetecek sana, \nBasit, sicak bir opucuk ve o opucukle dolacak tum gunlerin. \nO opucuk icin yapacaksin, hayatinin kavgasini, \nO opucuk icin yiyeceksin hayatinin dayagini. \nKabak cekirdegi verecek sana, rakamlarin veremedigi mutlulugu. \nEl yazisiyla yazilmis, egri bugru bir mektup olacak. \nEn degerli kagidin, hep yaninda tasidigin, atmaya kiyamadigin. \nSaatin sadece saati gosterecek, \nTelefonunu sadece telefon etmek i�in kullanacaksin, \nKucuk bir not defteri olacak bilgini en hizli sayan. \nBasit yasayacaksin basit\nSanki bir gun yasamin sona erecekmis gibi basit, \nCay, Simit ve Peynirle. \n\nNAZIM HIKMET RAN");
		}
		
		else if(secim4==2)
		{
			printf("\n\nSESSIZ GEMI\n\nArtik demir almak gunu gelmisse zamandan;\nMechule giden bir gemi kalkar bu limandan. \n\nHic yolcusu yokmus gibi sessizce alir yol; \nSallanmaz o kalkista ne mendil, ne de bir kol. \n\nRihtimda kalanlar bu seyahatten elemli, \nGunlerce siyah ufka bakar gozleri nemli; \n \nBicare gonuller! Ne giden son gemidir bu! \nHicranli hayatin ne de son matemidir bu. \n\nDunyada sevilmis ve seven nafile bekler; \nBilmez ki giden sevgililer donmeyecekler. \n \nBir cok gidenin her biri memnun ki yerinden, \nBir cok seneler gecti; donen yok seferinden. \n\nYAHYA KEMAL BEYATLI");
		}
	
		else if(secim4==3)
		{
			printf("\n\nAKIL GOZU\n\nSeni bulmaktan once aramak isterim.\nSeni sevmekten once anlamak isterim.\nSeni bir yasam boyu bitirmek degil de,\nSana hep, hep yeniden baslamak isterim.\n\nOZDEMIR ASAF");
		}
	
		else if(secim4==4)
		{
			printf("\n\nCAKIL\n\nSeni dusunurken\nBir cakil tasi isinir icimde\nBir kus gelir yuregimin ucuna konar\nBir gelincik acilir ansizin\nBir gelincik sinsi sinsi kanar\n\nSeni dusunurken\nBir erik agaci tepeden tirnaga donanir\nDeliler gibi donmeye baslar\nDondukce yumak yumak cozulur\nCozuldukce ufalir kuculur\nCekirdegi henuz sut baglamis\nMasmavi bir erik kesilir agzimda\nDokundukca yanar dudaklarim\n\nSeni dusunurken\nBir cakil tasi isinir icimde \n\nBEDRI RAHMI EYUBOGLU");
		}
	
		else if(secim4==5)
		{
			printf("\n\nBEKLENEN\n\nNe hasta bekler sabahi,\nNe taze oluyu mezar,\nNe de seytan bir gunahi,\nSeni bekledigim kadar.\nGecti, istemem gelmeni,\nYoklugunda buldum seni;\nBirak vehmimde golgeni,\nGelme, artik neye yarar?.. \n\nNECIP FAZIL KISAKUREK");
		}
		
		else if(secim4==6)
		{
			printf("\n \nANLATAMIYORUM\n\nAglasam sesimi duyar misiniz; \nMisralarimda; \nDokunabilir misiniz, \nGoz yaslarima, ellerinizle? \n \nBilmezdim sarkilarin bu kadar guzel, \nKelimelerinse kifayetsiz oldugunu\nBu derde dusmeden once. \n \nBir yer var, biliyorum; \nHer seyi soylemek mumkun; \nEpeyce yaklasmisim, duyuyorum; \nAnlatamiyorum\n \nORHAN VELI KANIK");
		}

		else if(secim4==7)
		{
			printf("\n \nISTANBUL'U DINLIYORUM\n \nIstanbul'u dinliyorum, gozlerim kapali\nOnce hafiften bir ruzgar esiyor; \nYavas yavas sallaniyor\nYapraklar, agaclarda; \nUzaklarda, cok uzaklarda, \nSucularin hic durmayan cingiraklari\nIstanbul'u dinliyorum, gozlerim kapali. \n\nIstanbul'u dinliyorum, gozlerim kapali; \nKuslar geciyor, derken; \nYukseklerden, suru suru, ciglik ciglik. \nAglar cekiliyor dalyanlarda; \nBir kadinin suya degiyor ayaklari;\nIstanbul'u dinliyorum, gozlerim kapali. \n \nORHAN VELI KANIK");
		}	
		
		else if(secim4==8)
		{
			printf("\n\nBENCE SIMDI SEN DE HERKES GIBISIN\n\nGozlerim gozunde aski secmiyor\nOnlardan kalbime sevda gecmiyor\nBen yordum ruhumu biraz da sen yor \nCunku bence simdi herkes gibisin\n\nYolunu beklerken daha dun gece\nKaciyorum bugun senden gizlice\nKalbime baktim da iste iyice\nAnladim ki sen de herkes gibisin\n \nBusbutun unuttum seni eminim\nMaziye karisti simdi yeminim\nKalbimde senin icin yok bile kinim\nBence sen de simdi herkes gibisin\n\nNAZIM HIKMET RAN");
		}	
	
		else if(secim4==9)
		{
			printf("\n\nACLIK ORDUSU YURUYOR\n\nAclik ordusu yuruyor\nYuruyor ekmege doymak icin\nEte doymak icin\nKitaba doymak icin\nHurriyete doymak icin. \n \nYuruyor kopruler gecerek kildan ince kilictan keskin\nYuruyor demir kapilari yirtip kale duvarlarini yikarak\nYuruyor ayaklari kan icinde. \n \nAclik ordusu yuruyor\nAdimlari gok gurultusu\nTurkuleri atesten\nBayraginda umut\nUmutlarin umudu bayraginda. \n\nNAZIM HIKMET RAN");
		}

		else if(secim4==10)
		{
			printf("\n\nTAHIR'LE ZUHRE MESELESI\n\nTahir olmak da ayip degil Zuhre olmak da\nHatta sevda yuzunden olmek de ayip degil, \nButun is Tahir'le Zuhre olabilmekte\nYani yurekte. \n \nMesela bir barikatta dovuserek\nMesela kuzey kutbunu kesfe giderken\nmesela denerken damarlarinda bir serumu\nOlmek ayip olur mu? \n\nTahir olmak da ayip degil Zuhre olmak da\nHatta sevda yuzunden olmek de ayip degil. \n\nNAZIM HIKMET RAN");
		}
	}while(secim4<1 || secim4>10);
	printf("\n\n\nIyi Gunler Dileriz...");
    
}


void mesaj ()
{
	printf("\n\n\nIyi calismalar dileriz...");
		
}
void odemeBolumu()
{
int onlineSatis();
void odemeBolumu();
double tutar = 0;
int ay, yil, cvv, c, i, j, s;
char adresBilgileri[200], ch;
unsigned long long krediKartNu, uyelikKartNu;
char secim1, secim2;
	
	printf("\n\nUYELIK BILGILERINIZ:\n");
	do
	{
	   
    	printf("\n14 haneli uye numaranizi giriniz:");
    	scanf("%llu", &uyelikKartNu);
    
	}while(uyelikKartNu > 99999999999999 || uyelikKartNu < 10000000000000);
    
   	printf("\n14 haneli uye numaraniz: %llu",uyelikKartNu);
	printf("\n\nKREDI KARTI BILGILERINIZ:\n");

	do
	{
    	printf("\n16 haneli kredi karti numaranizi giriniz:");
    	scanf("%llu", &krediKartNu);
   
    }while(krediKartNu > 9999999999999999 || krediKartNu < 1000000000000000 );
	
	printf("\n16 haneli kredi karti numaraniz: %llu", krediKartNu);

    printf("\n\nKredi kartinizin son kullanma tarihini giriniz:\n");

    do
    {
	
		printf("\nAy: ");
	    scanf("%d", &ay);
	    
	}while(ay < 1 || ay > 12 );
	
	for(;yil < 1 || yil > 99;)	
	{	
    	printf("\nYilin Son iki hanesi: ");
    	scanf("%d", &yil);
	}

    for(;cvv < 100 || cvv > 999;)
    {
		printf("\nKartinizin arkasindaki CVV numarasini giriniz: ");
    	scanf("%d", &cvv);
	}
    
	printf("\nLutfen adres bilgilerinizi giriniz: ");
    
//	fgets(adresBilgileri, sizeof(adresBilgileri), stdin);
	scanf("%c");
	gets(adresBilgileri);
    
	printf("\nAdresiniz: ");
    puts(adresBilgileri);
    
    sleep(3);
    
	printf("\nOdemeniz gerceklestirilmistir. \n\nIyi gunler dileriz...");
	
}


int onlineSatis()
{
	
	int onlineSatis();
void odemeBolumu();
double tutar = 0;
int ay, yil, cvv, c, i, j, s;
char adresBilgileri[200], ch;
unsigned long long krediKartNu, uyelikKartNu;
char secim1, secim2;
    printf("\tMerhaba!! Urunlerimiz:\n\n");
    //alttakiler ornek bir menudur

    printf("\t\n**KITAP KATEGORİSİ**\n\n");
    printf("Bilinmeyen bir kadinin mektubu- Stefan Zweig: '1' e basin\n");
    printf("Antabus- Seray Sahiner: '2' ye basin\n");
    printf("Satranc- Stefan Zweig: '3' e basin\n");

    printf("\n\t\n**FILM KATEGORISI**\n\n");
    printf("The Intern: '4' e basin\n");
    printf("Inception: '5' e basin\n");

    printf("\n\t\n**ALBUM KATEGORISI**\n\n");
    printf("After Hours- The Weeknd: '6' ya basin\n");
    printf("Parmak Izi - Sebnem Ferah: '7' ye basin\n");
    printf("Ruhum Bela- Can Bonomo: '8' e basin\n");

    printf("\n\t\n**DERGI KATEGORISI**\n\n");
    printf("Tuhaf Dergi: '9' a basin\n");
    printf("National Geographic: '10' a basin\n");
    printf("Oyungezer: '11' e basin\n");


    printf("\t\n**HOBI-KIRTASIYE KATEGORISI**\n\n");
    printf("Lisansli Kupa: '12' ye basin\n");
    printf("Lisansli defter: '13' e basin\n");

    printf("\t\n**E-KITAP KATEGORISI**\n\n");
    printf("1984-George Orwell: '14' e basin:\n");
    printf("Serenad- Zulfu Livaneli: '15' e basin:\n");

    printf("\nLutfen alacaginiz urunu seciniz: ");
    scanf("%d", &s);

    switch (s)
    {
        case 1:
        {
            tutar = tutar + 4.90;
            printf("Tutar= %.2f TL", tutar);
            
            sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
            
	
			break;
            
        	
        }
        case 2:
        {
            tutar = tutar +  11.90;
            printf("Tutar= %.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2 == '1')
            {
            	onlineSatis();
			}
			
            break;
        }
        case 3:
        {
            tutar = tutar +  4.55;
            printf("Tutar=%.2f TL", tutar);
            
            sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2 == '1')
            {
            	onlineSatis();
			}
            
            break;
        }
        case 4:
        {
            tutar = tutar +  13.50;
            printf("Tutar=%.2f TL", tutar);
            
            sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2 == '1')
            {
            	onlineSatis();
			}
            

            break;
        }
        
		case 5:
        {
            tutar = tutar +  38.00;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2 == '1')
            {
            	onlineSatis();
			}
			

            break;
        }
        
		case 6:
        {
            tutar = tutar +  30.50;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2 == '1')
            {
            	onlineSatis();
			}
			
            break;
        }
        
		case 7:
        {
            tutar = tutar +  15.95;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
			
            break;
        }
        case 8:
        {
            tutar = tutar +  20.90;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
        	    scanf(" %c", & secim2);
        	    
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
			
            break;
        }
        case 9:
        {
            tutar = tutar +  15.00;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
			
            break;
        }
        
        case 10:
        {
            tutar = tutar +  17.00;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
			

            break;
        }
        case 11:
        {
            tutar = tutar +  13.90;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2 == '1')
            {
            	onlineSatis();
			}
			

            break;
        }
        case 12:
        {
            tutar = tutar +  16.50;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
            	printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
			
            break;
        }
        case 13:
        {
            tutar = tutar +  12.90;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
            	printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
			
            break;
        }
        
        case 14:
        {
            tutar = tutar +  10.90;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
				printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
        	}while(secim2 < '1' || secim2 > '2');
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
			

            break;
        }
        case 15:
        {
            tutar = tutar +  28.50;
            printf("Tutar=%.2f TL", tutar);
            
			sleep(2);
            
            do
            {
			
            	printf("\n\nBaska bir urun satin almak ister misiniz? ( Evet(1) - Hayir(2) ) : ");
            	scanf(" %c", & secim2);
            	
            }while(secim2 < '1' || secim2 > '2');
           
           
		    if(secim2=='1')
            {
            	onlineSatis();
			}
			
            break;
        }
        default:
        {
            printf("Hatali sayi girdiniz lutfen tekrar giriniz.");
            sleep(2);
            onlineSatis();
        }
    }
    
	return 0;
}
void Yazici (char *pisim)
{
	char n;
	char ad_soyad[20];
	
	printf("BILGISAYAR ODAMIZA HOS GELDINIZ %s...\n\n", &*pisim);
	
	
	
	
		
	do
	{
		printf("\nLutfen cikti alabilmek icin bir Disk seciniz ( OS (C:) (C giriniz.)/ USB Surucusu (D:) ( D giriniz.) ) : ");
		scanf(" %c",&n);
	}
	while (n != 'C' && n != 'c' && n != 'D' && n != 'd');

	
	if(n == 'c' || n == 'C')
	{
		if(n == 'c')
		{
			n = n - 32;
			printf("\n\n%c:/Users/%s/Desktop/Word Belgesi\n\n", n, &*pisim);
		}
			
	}
		
	if(n == 'D' || n == 'd')
		printf("\n\nD:/Users/%s/Bilgisayarim/USB Dosyasi/Word Belgesi\n\n", &*pisim);

}		
void Ayarlar ()
{
	char secim_0;
	char secim_1;
	char secim_2;
	int secim_3;
	char secim_4;
	char secim_5;
		
	do
	{
		printf("\nYazici Seciniz (Siyah - Beyaz Yazici (1 Giriniz.) - Renkli Yazici  (2 Giriniz.)\nIPTAL ETMEK icin 0 giriniz: ");
		scanf(" %c",&secim_0);
	}
	while(secim_0 != '1' && secim_0 != '2' && secim_0 != '0');
	
	
	if(secim_0=='0')
	{
		printf("\n\nIsleminiz iptal edilmistir.\n\nIyi Gunler Dileriz...");
		return;
	}
	
	do
	{
		printf("\nTek yuze yazdir (1 Giriniz.) / Cift yuze yazdir (2 Giriniz.)\nIPTAL ETMEK icin 0 giriniz: ");
		scanf(" %c",&secim_1);
	}	
	while (secim_1 != '1' && secim_1 != '2' && secim_1 != '0');
	
	
	if(secim_1=='0')
	{
		printf("\n\nIsleminiz iptal edilmistir.\n\nIyi Gunler Dileriz...");
		return;
	}
	
	do
	{
		printf("\nYatay Yonlendirme (1 Giriniz.) / Dikey Yonlendirme (2 Giriniz.)\nIPTAL ETMEK icin 0 giriniz: ");
		scanf(" %c",&secim_2);
	}
	while(secim_2 != '1' && secim_2 != '2' && secim_2 != '0');

	if(secim_2=='0')
	{
		printf("\n\nIsleminiz iptal edilmistir.\n\nIyi Gunler Dileriz...");
		return;
	}
	
	

	printf("\nKopya sayisi : ");
	
	scanf(" %d",&secim_3);
	
	if(secim_3>60)
	{
		printf("\nYazicimizda yeterli kagit bulunmamaktadir.\n\nIyi gunler dileriz...");
		sleep(2);
		return;	
	}
	
	do
	{
		do
		{
			printf("\n%d tane kopya cikarilacaktir onayliyor musunuz? \n(Onayliyorum (1 Giriniz.) / Onaylamiyorum (2 Giriniz.))\nIPTAL ETMEK icin 0 giriniz: ",secim_3);	
			scanf(" %c",&secim_4);
		
		
		
			if (secim_4 == '2')
			{
				printf("\nKopya Sayisi: ");
				scanf(" %d",&secim_3);
			}
			
			else if(secim_4 == '0')
			{
				printf("\n\nIsleminiz iptal edilmistir.\n\nIyi Gunler Dileriz...");
				return;
			}
			
		}
		while(secim_4 == '2');
	}
	while(secim_4 != '1' && secim_4 != '2' && secim_4 != '0');
	
	
	
	printf("\n\nVARSAYILAN AYARLAR :\n\n");
	
	
	if (secim_0 == '1')
		printf("1) Siyah - Beyaz\n");
		
	else if (secim_0 == '2')
		printf("1) Renkli\n");
		
	
	if (secim_1 == '1')
		printf("2) Tek Yuz\n");
		
	else if (secim_1 == '2')
		printf("2) Cift Yuz\n");
		
	
    if (secim_2 == '1')
		printf("3) Yatay Yonlendirme\n");
	
	else if (secim_2 == '2')
		printf("3) Dikey Yonlendirme\n");
		
		
	printf("4) %d Kopya\n", secim_3);
	
	do
	{
		printf("\nYAZDIR (1) / IPTAL (0): ");
		scanf(" %c",& secim_5);
		
	}while(secim_5 != '1' && secim_5 != '0' );
	
	
	if(secim_5=='0')
	{
		printf("\n\nIsleminiz iptal edilmistir.\n\nIyi Gunler Dileriz...");
		return;	
		
	}	
	
	// Bilgisayar Odas�ndan girilen bilgiler k�rtasiyeye g�nderilecektir. ��kt� k�rtasiyeden ��kacakt�r...	
	
	printf("\n\nHazirlaniyor...");
	sleep(6);
	
	printf("\n\nCiktiniz hazirdir.\n\n");
	sleep(2);
	printf("Lutfen kutuphanemizin kirtasiyesinden ciktinizi aliniz...");
	
	sleep(2);
	
	printf("\n\n\nIyi Gunler Dileriz");
	
	
	
	
	
		
	
		
}
void Tanitim()
{
int secim;
	
   	printf("Ho�geldiniz\n" "L�tfen bilgi almak istedi�iniz k�sm� tu�lay�n�z..\n\n"
	"1)Randevu sistemi\t 2)Online sat��\t\t 3)My bookself\t\t 4)Kitap �d�n� alma\n\n"
	"5)Kart sistemi\t\t 6)�deme sistemi\t 7)Bookmatik\t\t 8)�yelik tipleri\n\n"
	"9)Promosyonlar\t\t 10)Sosyal Sorumluluk\t 11)�zel ders\t\t 12)Geri d�n���m\n\n"
	"12)Geri d�n���m\t\t 13)Kafeterya\t\t 14)***Bizimle �al��mak ister misiniz?*** \n\n");

	scanf("%d",&secim);
	system("CLS");
		
	switch(secim)
	{
        case 1:
        	puts("\e[31ma)�al��ma odalar� i�in randevu:\e[0m");
            puts("K�t�phanemizde bulunan �al��ma odalar� bireysel, grup toplu ve bilgisayarl� �al��ma odalar� olarak d�rde ayr�lmaktad�r.\n"
			"Bireysel odalar�m�zda size �zel odalarda �al��ma imkan� bulunmaktad�r."
			"Grup ve toplu �al��ma odalar�m�zda da arkada�lar�- n�zla birlikte konforla �al��abilirsiniz."
			"Bilgisayarl� odalar�m�zla da bilgisayarlar�m�z� ara�t�rmalar�n�z� yapmak i�in kullanabilirsiniz.");
            puts("\e[31mb)K�t�phane etkinlikleri ve randevu:\e[0m");
			puts("A��k hava sinema seanslar�, konser, sergi seanslar�,T�rkiye geneli denemeler ,online canl� yay�nlar,T�rkiye geneli dene-meler ,online canl� yay�nlar ,kitap bulu�malar�, konsept g�nlerinin tarihleri hakk�nda bilgi ve randevu alabilirsiniz.");
            break;
        case 2:
        	puts("\e[31mOnline sat��:\e[0m");
			puts("Online sat�� sistemimiz sayesine dergi, kitap, e-kitap, ikinci el kitap ve lisansl� �r�nlerimizde kolayca ula�abilirsi- niz.");
            break;
        case 3:
		    puts("\e[31mMy bookself:\e[0m");
			puts("Bu �zellik sayesinde okudu�unuz kitaplar, okuyaca��n�z kitaplar yar�m b�rakt���n�z kitaplar� kolayl�kla g�rebilirsiniz.\n" 
			"Okudu�unuz kitaplar hakk�nda yorum yazabilir ve puanlama yapabilirsiniz."
			"Bu �zelli�in i�indeki ke�fet k�sm� sayesinde de sizlere �zel se�ti�imiz kitap �nerilerine eri�ebilirsiniz.");
			break;
		case 4:	
	        puts("\e[31mKitap �d�n� alma:\e[0m"); 
			puts("�d�n� alma sistemimiz sayesinde k�t�phanemizdeki kaynaklara kolayl�kla eri�ebilirsiniz." 
			"Kitaplar�n �zerindeki QR kod sa- yesinde daha kolay ve h�zl� bir �ekilde kitaplar�m�z� �d�n� alabilirsiniz."
			"Bunlar�n yan� s�ra sat��lar�m�zda oldu�u gibi �d�n� al�nan kitaplar�m�zda da eve teslim kolayl��� bulunmaktad�r.");
			break;
		case 5:
			puts("\e[31mKart sistemi:\e[0m");
			puts("K�t�phane ile ilgili b�t�n i�lemler �yelik kartlar� sayesinde yap�lmaktad�r."
			"Kart�n�za para y�kleyebilir ve bunu k�t�pha-ne giri�inde kitap al�m�nda kafeterya �r�nlerine eri�imde kullanabilirsiniz."
			"12 ya� alt�ndaki �ocuklar�n kart hareketlerivelileri taraf�ndan izlenirken di�er �yelerimizde ayl�k kart hareketlerini kolayl�kla g�rebilir." 
			"Tek kullan�ml�k kartlar sayesinde de �yemiz olmayan ki�iler k�t�phane hizmetlerimizden yararlanabilir.");
            break;
        case 6:
        	puts("\e[31m�ye kart �deme sistemi:\e[0m"); 
			puts("�yelerimiz k�t�phane ile ilgili her t�rl� �demeyi �ye kartlar� ile yapabilmektedir.");
            puts("\e[31m�ye olmayanlar i�in �deme:\e[0m"); 
			puts("�ye olmayan m��terilerimiz tek kullan�ml�k kartlar� sayesinde �deme yapabilmektedir.");
            break;   
	    case 7:
	    	puts("\e[31mBookmatik:\e[0m");
			puts("Bookmatik sistemimiz sayesine her zaman her yerde kitaplar�m�z� cihazlar�m�zdan kolayl�kla �d�n� alabilir sat�n alabilirve �d�n� ald���n�z kitaplar� geri verebilirsiniz.");
			break;
	    case 8:
	    	puts("\e[31m�yelik tipleri:\e[0m");
			puts("Genel �yelik, okullara �zel �yelik, bireysel �yelik ve Premium �yeliklerimiz sayesinde k�t�phane hizmetlerine daha ayr�-cal�kl� olarak ula�abilirsiniz. ");
			break;
	    case 9:
	    	puts("\e[31mPromosyonlar:\e[0m");
			puts("K�t�phane sistemimizde trend topic olan kitap yorumu sahibinin kart�na hediye para sistemi vard�r."
			"Bunun yan�nda arkada-\n��n� al gel kampanyas� sayesinde arkada��n�zla beraber bu k�t�phanenin hizmetlerine daha uygun fiyatlara eri�ebiliniz.");
			break;
	    case 10:
	    	puts("\e[31mSosyal sorumluluk:\e[0m");
			puts("-----");
			break;
	    case 11:
	    	puts("\e[31m�zel ders:\e[0m");
	    	puts("�niversite ��rencilerinden olu�an ��retmen kadrosundan size �zel ya da grup �zel ders imkanlar� sayesinde �zel ders ala-bilirsiniz.");
	    	break;
	    case 12:
	    	puts("\e[31mGeri d�n���m:\e[0m");
			puts("-----");
			break;	
	    case 13:
	    	puts("\e[31mKafeterya:\e[0m ");
	    	puts("K�t�phanemiz �zel konsept kafemiz sayesinde kitab�n�z� okurken ya da �al���rken enfes tatlar�m�z� deneyebilirsiniz.");
	    	break;
	    case 14:
		    puts("\e[31m***Bizimle �al��mak ister misiniz?***\e[0m ");
			puts("G�n�ll� �al��an�m�z olarak ailemizin bir par�as� olabilirsiniz.");
	        break;
	        
	    default:
            puts("Error! operator is not correct");
    }

   printf("\n\nTekrar tan�t�m sayfas�na d�nmek i�in 0'a,��k�� yapmak i�in herhangi bir say�ya basabilirsiniz.");
   scanf("%d",&secim);
   while(secim==0)
   {
   	system("CLS");
   	Tanitim();
   }
		
}


