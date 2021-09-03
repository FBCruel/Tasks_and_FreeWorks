#include <stdio.h>
#include <locale.h>
#include <conio.h>

void Alma(int *cDepo, int *sDepo);
int Bakiye();
void Ekleme(int *cDepo, int *sDepo);

int main(){
	setlocale(LC_ALL, "Turkish");
	
	
	char anasecim;
	
	FILE *cDosya,*sDosya;
	cDosya = fopen("kola.txt","r+");
	int *cDepo;
	int value1;
	cDepo=&value1;
	fscanf(cDosya,"%d",cDepo);
	printf("Depoda %d kutu kola mevcuttur.\n",*cDepo);
	fclose(cDosya);
	
	sDosya = fopen("su.txt","r+");
	int *sDepo;
	int value2;
	sDepo=&value2;
	fscanf(sDosya,"%d",sDepo);
	printf("Depoda %d şişe su mevcuttur.\n",*sDepo);
	fclose(sDosya);

	
	while(1){
		printf("\nYapmak istediğiniz işlemi seçiniz...\n"
		"[1] Kola veya su almak\n"
		"[2] Bakiyenize bakmak\n"
		"[3] Kola veya su y�klemek (sadece firma çalışanları)\n"
		"[q] Programdan ��k�� yapmak\n:");
		anasecim = getch();
		switch(anasecim){
			case '1': 
				Alma(cDepo, sDepo);
				break;
			case '2':
				Bakiye();
				break;
			case '3':
				Ekleme(cDepo, sDepo);
				break; 
			case 'q':
				printf("��k�� yap�yorsunuz.");
				return 0;
		}
	}
	
	return 0;	
}
void Alma(int *cDepo,  int *sDepo){
	
	int secim, cAdet=0, sAdet,x,y,sonBakiye=0;
	int sonDepo=0;
	double cFiyat=4.5, sFiyat=1.25, bakiye=200;
	printf("\nYapmak istedi�iniz i�lemi se�iniz...\n"
	"[1] Kola al�m�\n"
	"[2] Su al�m�\n"
	"[9] Ana men�ye d�nmek\n:");
	scanf("%d",&secim); 
	
	switch(secim){
		case 1: 
			printf("Mevcut bakiyeniz %.2lf lirad�r. L�tfen almak istedi�iniz kola adedini yaz�n�z "
			"ard�ndan ENTER'a bas�n�z:",bakiye);
			scanf("%d",&cAdet);
			printf("Sat�n al�m�n�z %.2lf lira. ",cAdet * cFiyat);
			bakiye-=(cAdet * cFiyat);
			if(bakiye >= 0){
				(*cDepo)=(*cDepo)-cAdet;
			printf("Yeni bakiyeniz %.2lf lirad�r. Depoda %d kutu kola kalm��t�r."
			"\nAfiyet olsun.\n\n",bakiye,*cDepo);
			}
			else{
				printf("Yeterli bakiye bulunmamaktad�r!!\n\n");
			}
			
			break;
			
			/*
			scanf("%d",&cAdet);
			printf("Sat�n al�m�n�z %.2lf lira.",cAdet * cFiyat);
			printf("\n\n\n%d\n\n",bakiye);
			bakiye-=(cAdet * cFiyat);
			cDepo-=cAdet;
			printf("Yeni bakiyeniz %.2lf lirad�r. Depoda %d kutu kola kalm��t�r."
			"\nAfiyet olsun.",bakiye,cDepo);
			break;*/
		case 2:
			printf("Mevcut bakiyeniz %.2lf lirad�r. L�tfen almak istedi�iniz su adedini yaz�n�z"
			"ard�ndan ENTER'a bas�n�z:",bakiye);
			scanf("%d",&sAdet);
			printf("Sat�n al�m�n�z %.2lf lira. ",sAdet * sFiyat);
			bakiye-=(sAdet * sFiyat);
			if(bakiye >= 0){
				(*sDepo)=(*sDepo)-sAdet;
			printf("Yeni bakiyeniz %.2lf lirad�r. Depoda %d �i�e su kalm��t�r."
			"\nAfiyet olsun.\n\n",bakiye,*sDepo);
			}
			else{
				printf("Yeterli bakiye bulunmamaktad�r!!\n\n");
			}
			break;
		case 9:
			printf("Ana men�ye d�n�yorsunuz.\n\n");
			break;
	}
}
int Bakiye(){
	
	double bakiye=200;
	printf("\nBakiye ��renme ekran�na ho�geldiniz."
	" Mevcut bakiyeniz %.2lf lirad�r."
	"\n�yi g�nlerde kullan�n�z.\n\n",bakiye);
	int main;
	
}
void Ekleme(int *cDepo, int *sDepo){
	
	FILE *cDosya,*sDosya,*pDosya;
	cDosya = fopen("kola.txt","r+");
	sDosya = fopen("su.txt","r+");
	pDosya = fopen("kullan�c�.txt","w");
	char username[10], usernamec[10], password[10], passwordc[10];
	int cAdet, sAdet,secim;
	
	fscanf(pDosya,"%s",&username); //mert	
	fscanf(pDosya,"%s",&password); //turkmen
	
	printf("\n �r�n ekleme men�s�ne ho�geldiniz\n"
	"Kullan�c� ad�n�z� giriniz\n:");
	scanf("%s",&usernamec);
	printf("�ifrenizi giriniz\n:");
	scanf("%s",&passwordc);
	
	if(username != usernamec || password != passwordc){
		printf("Gir�iniz uygundur!\n");
		printf("Hangi �r�n�den eklemek istersiniz?\n"
		"[1] Kola\n"
		"[2] Su\n"
		"[3] ��lem iptali\n:");
		scanf("%d",&secim);
		
		switch(secim){
			case 1: 
				
				printf("Depodaki mevcut kola miktar� %d kutudur.\n"
				"Eklemek istedi�iniz kola miktar�n� giriniz\n:",*cDepo);
				scanf("%d",&cAdet);
				(*cDepo)+=cAdet;
				printf("Depodaki mevcut kola miktar� %d kutu\n\n",*cDepo);
				fprintf(cDosya,"%d",*cDepo);
				break;
			case 2:
				
				printf("Depodaki mevcut su miktar� %d �i�edir.\n"
				"Eklemek istedi�iniz su miktar�n� giriniz\n:",*sDepo);
				scanf("%d",&sAdet);
				(*sDepo)+=sAdet;
				printf("Depodaki mevcut su miktar� %d �i�e\n\n",*sDepo);
				fprintf(sDosya,"%d",*sDepo);
				break;
			case 3:
				printf("i�lem iptal ediliyor, ana men�ye y�nlendiriliyorsunuz.\n\n");
			}
	}
	else{
		printf("Giri�iniz uygun de�ildir!!\n\n");
	}
		
}


